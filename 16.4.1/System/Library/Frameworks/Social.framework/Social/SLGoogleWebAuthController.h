@interface SLGoogleWebAuthController : UIViewController

@property (copy, nonatomic) id /* block */ completion;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 presentationBlock:(id /* block */)a2;
- (id)initWithAccountDescription:(id)a0 presentationBlock:(id /* block */)a1;
- (id)initWithYouTubeUsername:(id)a0 accountDescription:(id)a1 presentationBlock:(id /* block */)a2;

@end
