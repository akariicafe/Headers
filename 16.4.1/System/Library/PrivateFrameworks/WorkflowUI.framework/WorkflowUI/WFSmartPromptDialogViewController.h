@class UIStackView, NSArray, WFContentCollection, NSString;

@interface WFSmartPromptDialogViewController : WFCompactDialogViewController <QLPreviewControllerDelegate>

@property (weak, nonatomic) UIStackView *sourceDestinationView;
@property (retain, nonatomic) WFContentCollection *dataSource;
@property (retain, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWithResult:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)allowsInteractiveDismiss;
- (void)loadContentCollection;

@end
