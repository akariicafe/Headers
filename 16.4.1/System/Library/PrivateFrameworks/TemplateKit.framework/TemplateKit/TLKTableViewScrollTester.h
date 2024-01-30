@class UIScrollView;

@interface TLKTableViewScrollTester : NSObject

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ firstScroll;
@property (retain, nonatomic) UIScrollView *tableView;
@property (nonatomic) BOOL directionUp;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL finishedFirstScroll;
@property (nonatomic) double scrollTime;

- (void)fire:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)finishFirstScrollIfNeeded;
- (void)performScrollTestOnTableView:(id)a0 completion:(id /* block */)a1;
- (void)performScrollTestOnTableView:(id)a0 firstScroll:(id /* block */)a1 completion:(id /* block */)a2;

@end
