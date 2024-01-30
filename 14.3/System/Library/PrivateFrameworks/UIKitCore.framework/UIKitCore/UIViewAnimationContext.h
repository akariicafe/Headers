@class NSArray, UITableViewCell;

@interface UIViewAnimationContext : NSObject

@property (retain, nonatomic) NSArray *viewAnimations;
@property (nonatomic) long long animationCount;
@property (readonly, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) UITableViewCell *swipeToDeleteCell;

- (id)initWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
