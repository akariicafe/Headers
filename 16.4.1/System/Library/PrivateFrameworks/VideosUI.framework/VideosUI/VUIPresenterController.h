@interface VUIPresenterController : NSObject

+ (void)dismissViewController:(id)a0 completion:(id /* block */)a1;
+ (void)popOrDismissViewController:(id)a0 completion:(id /* block */)a1;
+ (void)popViewController:(id)a0 completion:(id /* block */)a1;
+ (void)presentViewController:(id)a0 fromViewController:(id)a1 WithConfiguration:(id)a2 completion:(id /* block */)a3;
+ (void)pushViewController:(id)a0 fromViewController:(id)a1 isAnimated:(BOOL)a2 completion:(id /* block */)a3;

@end
