@class NSArray, _UIResilientRemoteViewContainerViewController;

@interface NSSNewsViewController : UIViewController

@property (copy, nonatomic) NSArray *articleIDs;
@property (retain, nonatomic) _UIResilientRemoteViewContainerViewController *remoteViewContainerViewController;
@property (nonatomic, getter=isLinkPreviewing) BOOL linkPreviewing;

+ (BOOL)canOpenURL:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (id)initWithURL:(id)a0;
- (id)initWithArticleID:(id)a0;
- (void)requestRemoteViewController;
- (void)viewDidLoad;
- (id)initWithArticleIDs:(id)a0;
- (void)setupRemoteViewController:(id)a0;

@end
