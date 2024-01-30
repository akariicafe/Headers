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
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (id)mutableFavoriteForBookmarkStorage:(id)a0;
+ (id)mutableObjectProtocol;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)debugTitle;
- (id)init;
- (void).cxx_destruct;
- (void)_noteWillMutate;
- (void)_markImmutable;
- (id)abridgedBookmarkStorageForSpotlightStorage;
- (id)copyIfValidWithError:(out id *)a0;
- (void)ifMutablePlace:(id /* block */)a0 ifMutableRoute:(id /* block */)a1 ifMutableRegion:(id /* block */)a2 ifMutableTransitLine:(id /* block */)a3;
- (void)ifPlace:(id /* block */)a0 ifRoute:(id /* block */)a1 ifRegion:(id /* block */)a2 ifTransitLine:(id /* block */)a3;
- (id)initWithBookmarkStorage:(id)a0;
- (BOOL)isUserVisibleDuplicateOfFavorite:(id)a0;
- (id)persisterOnlyBookmarkStorage;
- (id)transferToImmutableIfValidWithError:(out id *)a0;

@end
