@class CKMessageEntryView;

@interface CKMessageEntryViewController : UIInputViewController

@property (readonly, nonatomic) CKMessageEntryView *entryView;
@property (nonatomic) BOOL inputAccessoryViewControllerEnabled;

+ (BOOL)_requiresProxyInterface;

- (void).cxx_destruct;
- (void)loadView;
- (id)initWithEntryView:(id)a0;

@end
