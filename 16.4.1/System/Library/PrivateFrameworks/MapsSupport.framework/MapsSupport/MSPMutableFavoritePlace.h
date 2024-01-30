@class NSString, NSUUID;
@protocol GEOMapItem;

@interface MSPMutableFavoritePlace : MSPMutableFavorite <MSPFavoritePlace>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) id<GEOMapItem> geoMapItem;
@property (nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinateOfDroppedPin;
@property (nonatomic) int floorOrdinalOfDroppedPin;
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
