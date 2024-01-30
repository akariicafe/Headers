@class NSArray;

@interface LCFCoreMLBatchProvider : NSObject <MLBatchProvider>

@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) NSArray *featureProviders;

- (id)init:(id)a0;
- (void).cxx_destruct;
- (id)featuresAtIndex:(long long)a0;

@end
