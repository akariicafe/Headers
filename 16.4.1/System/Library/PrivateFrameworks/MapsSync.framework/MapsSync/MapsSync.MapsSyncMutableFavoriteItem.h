@class NSSet, NSString, GEOMapItemStorage;

@interface MapsSync.MapsSyncMutableFavoriteItem : MapsSync.MapsSyncMutableBaseItem

@property (nonatomic, retain) void /* unknown type, empty encoding */ _proxyFavorite;
@property (nonatomic, copy) NSSet *contactHandles;
@property (nonatomic, copy) NSString *customName;
@property (nonatomic) BOOL hidden;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, copy) NSString *originatingAddressString;
@property (nonatomic) short type;
@property (nonatomic) short source;
@property (nonatomic, copy) NSString *shortcutIdentifier;
@property (nonatomic) short version;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)a0;
- (id)addContactHandle:(id)a0;
- (id)moveBeforeItem:(id)a0;
- (id)moveAfterItem:(id)a0;
- (void)moveToBack;
- (void)moveToFront;
- (id)removeContactHandle:(id)a0;

@end
