@class SUOverlayTransition, UIViewController;

@interface SUOverlayAction : NSObject

@property (nonatomic) int actionType;
@property (nonatomic) long long animationCount;
@property (retain, nonatomic) UIViewController *otherViewController;
@property (retain, nonatomic) SUOverlayTransition *transition;
@property (retain, nonatomic) UIViewController *viewController;

- (void)dealloc;

@end
