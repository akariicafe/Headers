@class CPLChangeBatch, NSString, NSDictionary, NSMutableDictionary, NSSet, NSMutableSet;

@interface CPLExtractedBatch : NSObject <NSSecureCoding> {
    NSDictionary *_uploadIdentifiers;
    NSMutableDictionary *_mutableUploadIdentifiers;
    NSSet *_untrustableScopedIdentifiers;
    NSMutableSet *_mutableUntrustableScopedIndentifiers;
    BOOL _resourceSizeIsCalculated;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CPLChangeBatch *batch;
@property (readonly, nonatomic) unsigned long long resourceSize;
@property (nonatomic, getter=isFull) BOOL full;
@property (readonly, nonatomic) BOOL batchCanLowerQuota;
@property (copy, nonatomic) NSString *clientCacheIdentifier;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)effectiveResourceSizeToUploadUsingStorage:(id)a0;
- (void)forceScopeIndexOnAllRecordsTo:(long long)a0;
- (id)uploadIdentifiers;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)uploadIdentifierForChange:(id)a0;
- (void)addChange:(id)a0 fromStorage:(id)a1;

@end
