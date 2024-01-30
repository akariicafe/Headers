@class CKMessageEntryView;

@interface CKMessageEntryViewController : UIInputViewController

@property (readonly, nonatomic) CKMessageEntryView *entryView;
@property (nonatomic) BOOL inputAccessoryViewControllerEnabled;

+ (BOOL)_requiresProxyInterface;

- (id)initWithEntryView:(id)a0;
- (void)loadView;
- (void).cxx_destruct;

@end
