@class NSString, GEOMapRegion, NSUUID;

@interface MSPMutableFavoriteRegion : MSPMutableFavorite <MSPFavoriteRegion>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) GEOMapRegion *geoMapRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *storageIdentifier;

+ (id)mutableObjectProtocol;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)mutableObjectClass;

- (id)transferToImmutableIfValidWithError:(out id *)a0;
- (id)initWithBookmarkStorage:(id)a0;

@end
