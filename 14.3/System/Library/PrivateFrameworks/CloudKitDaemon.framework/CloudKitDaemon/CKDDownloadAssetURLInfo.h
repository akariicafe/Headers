@class CKAsset;

@interface CKDDownloadAssetURLInfo : NSObject

@property (retain, nonatomic) CKAsset *asset;
@property (nonatomic) struct _OpaquePCSShareProtection { } *recordPCS;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
