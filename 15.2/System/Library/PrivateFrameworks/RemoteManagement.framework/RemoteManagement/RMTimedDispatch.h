@class NSString;

@interface RMTimedDispatch : NSObject

@property (readonly, nonatomic) id /* block */ timerCompletionBlock;
@property (readonly, nonatomic) NSString *timerID;
@property (readonly, nonatomic) BOOL complete;

+ (id)timedDispatchAfterInterval:(double)a0 completionBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (void)cancel;
- (id)initAfterInterval:(double)a0 completionBlock:(id /* block */)a1;

@end
