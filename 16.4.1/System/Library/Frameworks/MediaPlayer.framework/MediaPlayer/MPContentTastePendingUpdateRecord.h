@class NSString, NSUUID;

@interface MPContentTastePendingUpdateRecord : NSObject

@property (readonly, nonatomic) NSString *playlistGlobalID;
@property (readonly, nonatomic) long long storeAdamID;
@property (readonly, nonatomic) long long tasteType;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSUUID *UUID;

- (void).cxx_destruct;
- (void)_initializeWithType:(long long)a0 tasteType:(long long)a1;
- (id)initWithPlaylistGlobalID:(id)a0 tasteType:(long long)a1;
- (id)initWithStoreAdamID:(long long)a0 tasteType:(long long)a1;

@end
