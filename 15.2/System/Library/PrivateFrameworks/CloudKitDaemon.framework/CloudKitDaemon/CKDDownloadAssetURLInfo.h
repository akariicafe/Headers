@class CKAsset;

@interface CKDDownloadAssetURLInfo : NSObject

@property (retain, nonatomic) CKAsset *asset;
@property (nonatomic) struct _OpaquePCSShareProtection { } *recordPCS;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
