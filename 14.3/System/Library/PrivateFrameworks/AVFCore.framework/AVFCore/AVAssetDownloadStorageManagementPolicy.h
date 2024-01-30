@class NSString, AVAssetDownloadStorageManagementPolicyInternal, NSDate;

@interface AVAssetDownloadStorageManagementPolicy : NSObject <NSCopying, NSMutableCopying> {
    AVAssetDownloadStorageManagementPolicyInternal *_storageManagementPolicy;
}

@property (readonly, copy, nonatomic) NSString *priority;
@property (readonly, copy, nonatomic) NSDate *expirationDate;

- (void)setExpirationDate:(id)a0;
- (void)setPriority:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)_setPolicyDictionary:(id)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_policyDictionary;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
