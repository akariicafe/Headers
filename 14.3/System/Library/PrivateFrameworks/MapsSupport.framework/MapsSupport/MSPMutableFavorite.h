@class NSString, NSUUID, MSPBookmarkStorage;

@interface MSPMutableFavorite : NSObject <MSPFavorite, MSPMutableObject, MSPIdentifiableFavorite>

@property (readonly, nonatomic, getter=_isImmutable) BOOL immutable;
@property (readonly, nonatomic) MSPBookmarkStorage *bookmarkStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *storageIdentifier;

+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (id)mutableFavoriteForBookmarkStorage:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)debugTitle;
- (BOOL)isUserVisibleDuplicateOfFavorite:(id)a0;
- (void)ifPlace:(id /* block */)a0 ifRoute:(id /* block */)a1 ifRegion:(id /* block */)a2 ifTransitLine:(id /* block */)a3;
- (id)transferToImmutableIfValidWithError:(out id *)a0;
- (id)copyIfValidWithError:(out id *)a0;
- (void)_noteWillMutate;
- (void)_markImmutable;
- (id)abridgedBookmarkStorageForSpotlightStorage;
- (id)initWithBookmarkStorage:(id)a0;
- (void)ifMutablePlace:(id /* block */)a0 ifMutableRoute:(id /* block */)a1 ifMutableRegion:(id /* block */)a2 ifMutableTransitLine:(id /* block */)a3;
- (id)persisterOnlyBookmarkStorage;

@end
