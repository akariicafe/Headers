@class NSArray;

@interface MLArrayBatchProvider : NSObject <MLBatchProvider>

@property (readonly, nonatomic) NSArray *array;
@property (readonly, nonatomic) long long count;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)featuresAtIndex:(long long)a0;
- (id)initWithFeatureProviderArray:(id)a0;

@end
