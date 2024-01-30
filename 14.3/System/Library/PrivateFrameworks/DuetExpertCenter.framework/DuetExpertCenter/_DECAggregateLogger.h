@class NSMutableDictionary;

@interface _DECAggregateLogger : NSObject {
    NSMutableDictionary *_batchScalars;
}

+ (void)logKey:(id)a0 scalarValue:(long long)a1;
+ (void)logIncrementKey:(id)a0;
+ (void)logWithCallback:(id /* block */)a0;
+ (void)logKey:(id)a0 distValue:(double)a1;
+ (void)logKey:(id)a0 replaceScalarValueWith:(long long)a1;
+ (double)logKey:(id)a0 blockTiming:(id /* block */)a1;

- (void)logKey:(id)a0 scalarValue:(long long)a1;
- (void)logIncrementKey:(id)a0;
- (void).cxx_destruct;
- (void)logKey:(id)a0 distValue:(double)a1;
- (void)flush;
- (id)initCallbackInstance;

@end
