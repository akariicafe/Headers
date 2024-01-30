@class NSArray, NSDictionary;

@interface NSCloudKitMirroringFetchRecordsRequest : NSCloudKitMirroringImportRequest {
    NSDictionary *_entityNameToAttributesToFetch;
    NSDictionary *_entityNameToAttributeNamesToFetch;
    BOOL _editable;
    unsigned long long _perOperationObjectThreshold;
}

@property (copy, nonatomic) NSArray *objectIDsToFetch;
@property (readonly, copy, nonatomic) NSDictionary *entityNameToAttributesToFetch;

- (id)initWithOptions:(id)a0 completionBlock:(id /* block */)a1;
- (void)dealloc;
- (BOOL)validateForUseWithStore:(id)a0 error:(id *)a1;
- (void)setEntityNameToAttributeNamesToFetch:(id)a0;
- (void)setEntityNameToAttributesToFetch:(id)a0;

@end
