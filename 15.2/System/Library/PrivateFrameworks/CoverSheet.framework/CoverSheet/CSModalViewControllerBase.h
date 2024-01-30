@class NSString;

@interface CSModalViewControllerBase : CSCoverSheetViewControllerBase <CSModalViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (BOOL)isPortrait;
- (void)viewDidLoad;
- (long long)presentationStyle;
- (long long)presentationPriority;
- (id)view;
- (long long)presentationType;
- (id)viewIfLoaded;
- (void)aggregateBehavior:(id)a0;
- (void)aggregateAppearance:(id)a0;
- (void)handlePrimaryActionForView:(id)a0;
- (void)handleSecondaryActionForView:(id)a0;

@end
