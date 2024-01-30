@class AXElement, NSString;

@interface CACCorrectionPresentationManager : CACSimpleContentViewManager <CACCorrectionsPresentationDelegate, UIPopoverPresentationControllerDelegate>

@property (retain, nonatomic) AXElement *element;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)remoteViewType;
+ (int)axNotification;

- (void).cxx_destruct;
- (BOOL)isOverlay;
- (void)handleAXNotificationData:(void *)a0;
- (void)dismissCorrectionsPresentationViewController:(id)a0;
- (void)correctionsPresentationViewController:(id)a0 didSelectItemWithText:(id)a1;
- (void)showCorrectionsForElement:(id)a0 nBestStrings:(id)a1;
- (void)hideIfNeededForElements:(id)a0;
- (void)_showCorrectionsForElement:(id)a0 fromString:(id)a1 withAlternatives:(id)a2 withEmojis:(id)a3 portraitUpRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;

@end
