@class CKMessageEntryView;

@interface CKMessageEntryViewController : UIInputViewController

@property (readonly, nonatomic) CKMessageEntryView *entryView;
@property (nonatomic) BOOL inputAccessoryViewControllerEnabled;

+ (BOOL)_requiresProxyInterface;

- (id)initWithEntryView:(id)a0;
- (void).cxx_destruct;
- (void)loadView;

@end
