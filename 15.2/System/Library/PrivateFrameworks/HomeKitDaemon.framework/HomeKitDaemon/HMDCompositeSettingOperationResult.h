@class NSString, HMDCompositeSettingMetadata, HMDCompositeSetting, NSError;

@interface HMDCompositeSettingOperationResult : HMFObject

@property (readonly) HMDCompositeSettingMetadata *metadata;
@property (readonly) HMDCompositeSetting *setting;
@property (readonly, copy) NSError *error;
@property (readonly, copy) NSString *keyPath;

+ (id)frameWorkFetchResultsWithOperationResults:(id)a0;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithKeyPath:(id)a0 setting:(id)a1 metadata:(id)a2 error:(id)a3;

@end
