@class PKPassGroupView, UIAlertController, PKPassView;
@protocol PKPassDeleteAnimationControllerDelegate;

@interface PKPassDeleteAnimationController : NSObject {
    UIAlertController *_alertController;
}

@property (weak, nonatomic) id<PKPassDeleteAnimationControllerDelegate> delegate;
@property (readonly, retain, nonatomic) PKPassView *passView;
@property (readonly, retain, nonatomic) PKPassGroupView *groupView;

+ (void)performPassbookDeleteWithView:(id)a0 inSuperview:(id)a1 completion:(id /* block */)a2;

- (void)finished:(BOOL)a0;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)_startAnimation;
- (void)_unregisterForEnterBackgroundNotification;
- (void)_registerForEnterBackgroundNotification;
- (id)initWithPassView:(id)a0 groupView:(id)a1;
- (void)showInViewController:(id)a0;
- (void)forceDeleteAnimation;

@end
