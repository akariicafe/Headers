@class NSString, NSDictionary, CalculateResult;

@interface CalculateRequest : NSObject

@property (retain, nonatomic) NSString *expression;
@property (retain, nonatomic) NSDictionary *options;
@property (retain, nonatomic) CalculateResult *result;
@property (nonatomic) BOOL isCanceled;
@property (copy, nonatomic) id /* block */ resultHandler;

+ (void)_unlock;
+ (id)serialQueue;
+ (void)_lock;

- (void)finish;
- (void)update;
- (void)cancel;
- (void).cxx_destruct;

@end
