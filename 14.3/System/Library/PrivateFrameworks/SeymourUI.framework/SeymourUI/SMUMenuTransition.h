@class CCUIContentModuleDetailTransitioningDelegate;
@protocol UIViewControllerTransitioningDelegate;

@interface SMUMenuTransition : NSObject {
    CCUIContentModuleDetailTransitioningDelegate *_delegate;
}

@property (readonly, nonatomic) id<UIViewControllerTransitioningDelegate> delegate;

- (id)initWithAnchoringViewController:(id)a0;
- (void).cxx_destruct;

@end
