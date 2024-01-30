@class SBPIPContainerViewController, SBWindowScene, SBPictureInPictureWindow;

@interface SBPIPContentContext : NSObject

@property (readonly, nonatomic) long long contentZOrderPriority;
@property (retain, nonatomic) SBWindowScene *windowScene;
@property (retain, nonatomic) SBPictureInPictureWindow *window;
@property (readonly, nonatomic) SBPIPContainerViewController *containerViewController;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithWindowScene:(id)a0 containerViewController:(id)a1;

@end
