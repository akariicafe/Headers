@class NSString;

@interface SSVMutableMediaContentTasteItem : SSVMediaContentTasteItem

@property (nonatomic) unsigned long long contentType;
@property (copy, nonatomic) NSString *playlistGlobalID;
@property (nonatomic) long long storeAdamID;
@property (nonatomic) unsigned long long tasteType;

- (void)setContentType:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStoreAdamID:(long long)a0;
- (void)setPlaylistGlobalID:(id)a0;
- (void)setTasteType:(unsigned long long)a0;

@end
