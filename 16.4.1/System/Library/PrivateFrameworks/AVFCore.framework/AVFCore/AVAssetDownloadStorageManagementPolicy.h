@class NSString, AVAssetDownloadStorageManagementPolicyInternal, NSDate;

@interface AVAssetDownloadStorageManagementPolicy : NSObject <NSCopying, NSMutableCopying> {
    AVAssetDownloadStorageManagementPolicyInternal *_storageManagementPolicy;
}

@property (readonly, copy, nonatomic) NSString *priority;
@property (readonly, copy, nonatomic) NSDate *expirationDate;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setExpirationDate:(id)a0;
- (void)setPriority:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)_policyDictionary;
- (void)_setPolicyDictionary:(id)a0;

@end
