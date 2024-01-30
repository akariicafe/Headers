@class NSString, NSUUID, MSPTransitLineBookmark;
@protocol GEOTransitLine;

@interface MSPMutableFavoriteTransitLine : MSPMutableFavorite <MSPFavoriteTransitLine>

@property (readonly, nonatomic) MSPTransitLineBookmark *transitLineBookmark;
@property (retain, nonatomic) id<GEOTransitLine> transitLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *storageIdentifier;

+ (Class)mutableObjectClass;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (id)mutableObjectProtocol;

- (id)initWithBookmarkStorage:(id)a0;
- (BOOL)isUserVisibleDuplicateOfFavorite:(id)a0;
- (id)transferToImmutableIfValidWithError:(out id *)a0;

@end
