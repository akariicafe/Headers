@class NSString;

@interface CSModalViewControllerBase : CSCoverSheetViewControllerBase <CSModalViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (long long)presentationStyle;
- (BOOL)isPortrait;
- (long long)presentationPriority;
- (void)aggregateBehavior:(id)a0;
- (void)aggregateAppearance:(id)a0;
- (long long)presentationType;
- (id)view;
- (id)viewIfLoaded;
- (void)viewDidLoad;
- (void)handlePrimaryActionForView:(id)a0;
- (void)handleSecondaryActionForView:(id)a0;

@end
