@class NSMutableDictionary;

@interface PSQuotaInfo : NSObject {
    NSMutableDictionary *_mediaKindDict;
}

@property (nonatomic) unsigned long long totalStorage;
@property (nonatomic) unsigned long long usedStorage;

- (void).cxx_destruct;
- (id)init;
- (void)setStorageInUse:(unsigned long long)a0 forMediaKind:(long long)a1;
- (unsigned long long)storageInUseForMediaKind:(long long)a0;

@end
