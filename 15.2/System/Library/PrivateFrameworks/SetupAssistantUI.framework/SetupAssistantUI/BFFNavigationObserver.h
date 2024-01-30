@protocol BFFNavigationControllerDelegate;

@interface BFFNavigationObserver : NSObject

@property (weak, nonatomic) id<BFFNavigationControllerDelegate> observer;

+ (id)observerWithObserver:(id)a0;

- (void).cxx_destruct;

@end
