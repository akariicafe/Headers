@class NSArray, _UIResilientRemoteViewContainerViewController;

@interface NSSNewsViewController : UIViewController

@property (copy, nonatomic) NSArray *articleIDs;
@property (retain, nonatomic) _UIResilientRemoteViewContainerViewController *remoteViewContainerViewController;
@property (nonatomic, getter=isLinkPreviewing) BOOL linkPreviewing;

+ (BOOL)canOpenURL:(id)a0;

- (void)viewDidLoad;
- (void)requestRemoteViewController;
- (id)initWithURL:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)initWithArticleID:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithArticleIDs:(id)a0;
- (void)setupRemoteViewController:(id)a0;

@end
