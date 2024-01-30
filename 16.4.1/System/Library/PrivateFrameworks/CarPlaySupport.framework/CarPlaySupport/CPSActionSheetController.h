@class CPActionSheetTemplate;
@protocol CPTemplateDelegate;

@interface CPSActionSheetController : UIAlertController

@property (retain, nonatomic) CPActionSheetTemplate *actionSheet;
@property (retain, nonatomic) id<CPTemplateDelegate> templateDelegate;

+ (id)actionSheetControllerWithActionSheet:(id)a0;

- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;

@end
