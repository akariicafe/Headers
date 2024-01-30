@class NSString, SKUIClientContext, SKUIResourceLoader, SKUICountdownComponent;

@interface SKUICountdownViewController : UIViewController <SKUIArtworkRequestDelegate>

@property (readonly, nonatomic) SKUIResourceLoader *artworkLoader;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (readonly, nonatomic) SKUICountdownComponent *countdownComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)initWithCountdownComponent:(id)a0 artworkLoader:(id)a1;

@end
