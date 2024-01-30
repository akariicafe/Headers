@class NSArray, NSDictionary;

@interface NSCloudKitMirroringFetchRecordsRequest : NSCloudKitMirroringImportRequest {
    NSDictionary *_entityNameToAttributesToFetch;
    NSDictionary *_entityNameToAttributeNamesToFetch;
    BOOL _editable;
}

@property (nonatomic) unsigned long long perOperationObjectThreshold;
@property (copy, nonatomic) NSArray *objectIDsToFetch;
@property (readonly, copy, nonatomic) NSDictionary *entityNameToAttributesToFetch;

- (void)dealloc;
- (BOOL)validateForUseWithStore:(id)a0 error:(id *)a1;
- (void)setEntityNameToAttributesToFetch:(id)a0;
- (id)_entityNameToAttributeNamesToFetch;
- (void)setEntityNameToAttributeNamesToFetch:(id)a0;
- (BOOL)_isEditable;
- (id)initWithOptions:(id)a0 completionBlock:(id /* block */)a1;

@end
