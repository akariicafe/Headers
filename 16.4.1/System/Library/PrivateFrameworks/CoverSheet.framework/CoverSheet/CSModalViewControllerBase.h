@class NSString;

@interface CSModalViewControllerBase : CSCoverSheetViewControllerBase <CSModalViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (long long)presentationStyle;
- (long long)presentationPriority;
- (id)view;
- (long long)presentationType;
- (BOOL)isPortrait;
- (void)viewDidLoad;
- (void)aggregateBehavior:(id)a0;
- (void)aggregateAppearance:(id)a0;
- (id)viewIfLoaded;
- (void)handlePrimaryActionForView:(id)a0;
- (void)handleSecondaryActionForView:(id)a0;

@end
