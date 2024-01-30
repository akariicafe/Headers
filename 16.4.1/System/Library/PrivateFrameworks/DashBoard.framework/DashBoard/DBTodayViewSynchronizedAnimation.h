@interface DBTodayViewSynchronizedAnimation : NSObject

@property (copy, nonatomic) id /* block */ animationBlock;
@property (nonatomic) BOOL ready;
@property (retain, nonatomic) id client;

- (id)description;
- (void).cxx_destruct;

@end
