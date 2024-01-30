@class NSURL;

@interface CLAvailabilityTileParser : NSObject {
    struct shared_ptr<AvailabilityTile> { struct AvailabilityTile *__ptr_; struct __shared_weak_count *__cntrl_; } _avlTile;
}

@property (readonly, nonatomic) NSURL *path;

+ (BOOL)generateAvlTileFromJSON:(id)a0 atPath:(id)a1;
+ (void)_setParamOverrides:(void *)a0 fromDict:(id)a1;

- (BOOL)tileIsOpenForIncrementalIO;
- (id).cxx_construct;
- (id)initWithTilePathIncrementalIO:(id)a0;
- (unsigned long long)venuesCount;
- (id)initWithEmptyTile;
- (BOOL)getNextVenueBoundsIncrementally:(void *)a0;
- (void *)getAvlTile;
- (int)numVenuesExpected;
- (id)init;
- (BOOL)_openTileFileForIncrementalIO;
- (int)numTotalExpectedExteriorsInVenues;
- (void).cxx_destruct;

@end
