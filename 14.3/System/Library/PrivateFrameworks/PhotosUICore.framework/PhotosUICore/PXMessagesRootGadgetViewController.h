@class PXMessagesGadgetDataSourceManager;

@interface PXMessagesRootGadgetViewController : PXGadgetUIViewController

@property (nonatomic) double recentPhotosHeight;
@property (readonly, nonatomic) PXMessagesGadgetDataSourceManager *messagesDataSourceManager;

+ (Class)gadgetSpecClass;

- (void).cxx_destruct;
- (id)initWithGadgetDataSourceManager:(id)a0;
- (void)prepareForPresentationStyle:(long long)a0;
- (void)viewDidLoad;

@end
