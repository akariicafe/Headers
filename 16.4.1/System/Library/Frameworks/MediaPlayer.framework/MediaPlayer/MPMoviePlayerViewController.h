@class MPMoviePlayerController;

@interface MPMoviePlayerViewController : UIViewController

@property (readonly, nonatomic) MPMoviePlayerController *moviePlayer;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithContentURL:(id)a0;

@end
