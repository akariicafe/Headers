@class NSError;

@interface BPSPartialCompletion : NSObject

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) NSError *error;

+ (id)withState:(long long)a0 value:(id)a1;
+ (id)withState:(long long)a0 error:(id)a1;
+ (id)withState:(long long)a0;

- (id)initWithState:(long long)a0 value:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
