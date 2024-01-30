@interface LiftUI.LiftUIFactory : NSObject

+ (id)viewControllerWithData:(id)a0 delegate:(id)a1 dataSource:(id)a2;
+ (id)viewControllerWithJson:(id)a0 delegate:(id)a1 dataSource:(id)a2;
+ (id)viewControllerWithUrl:(id)a0 delegate:(id)a1 dataSource:(id)a2;

- (id)init;

@end
