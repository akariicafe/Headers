@class NSError;

@interface BPSFutureResult : NSObject

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) id value;

+ (id)successWithValue:(id)a0;
+ (id)failureWithError:(id)a0;

- (void).cxx_destruct;
- (id)initWithState:(long long)a0 value:(id)a1 error:(id)a2;

@end
