@class NSMutableDictionary;

@interface PSQuotaInfo : NSObject {
    NSMutableDictionary *_mediaKindDict;
}

@property (nonatomic) unsigned long long totalStorage;
@property (nonatomic) unsigned long long usedStorage;

- (id)init;
- (void).cxx_destruct;
- (void)setStorageInUse:(unsigned long long)a0 forMediaKind:(long long)a1;
- (unsigned long long)storageInUseForMediaKind:(long long)a0;

@end
