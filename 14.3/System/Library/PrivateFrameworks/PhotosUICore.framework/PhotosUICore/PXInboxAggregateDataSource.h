@class NSDictionary;

@interface PXInboxAggregateDataSource : PXInboxModelDataSource

@property (readonly, copy, nonatomic) NSDictionary *providerSourceDictionary;

- (void).cxx_destruct;
- (id)providerSourceForModel:(id)a0;
- (id)initWithModels:(id)a0 providerSourceDictionary:(id)a1;

@end
