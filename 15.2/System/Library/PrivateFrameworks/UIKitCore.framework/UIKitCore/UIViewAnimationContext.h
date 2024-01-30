@class NSArray, UITableViewCell;

@interface UIViewAnimationContext : NSObject {
    NSArray *_viewAnimations;
    long long _animationCount;
    id /* block */ _completionHandler;
    UITableViewCell *_swipeToDeleteCell;
}

- (void).cxx_destruct;

@end
