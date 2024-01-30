@class UIScrollView;

@interface TLKTableViewScrollTester : NSObject

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ firstScroll;
@property (retain, nonatomic) UIScrollView *tableView;
@property (nonatomic) BOOL directionUp;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL finishedFirstScroll;
@property (nonatomic) double scrollTime;

- (void).cxx_destruct;
- (id)init;
- (void)fire:(id)a0;
- (void)performScrollTestOnTableView:(id)a0 firstScroll:(id /* block */)a1 completion:(id /* block */)a2;
- (void)finishFirstScrollIfNeeded;
- (void)performScrollTestOnTableView:(id)a0 completion:(id /* block */)a1;

@end
