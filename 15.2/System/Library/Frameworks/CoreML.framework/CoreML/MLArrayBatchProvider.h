@class NSArray;

@interface MLArrayBatchProvider : NSObject <MLBatchProvider>

@property (readonly, nonatomic) NSArray *array;
@property (readonly, nonatomic) long long count;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)initWithFeatureProviderArray:(id)a0;
- (id)featuresAtIndex:(long long)a0;
- (void).cxx_destruct;

@end
