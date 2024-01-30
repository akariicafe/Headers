@class CLLocation;

@interface PXMemoriesBlacklistPlaceLocationAccessoryViewSpec : PXMemoriesBlacklistAccessoryViewSpec

@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) double regionRadius;

+ (id)specWithLocation:(id)a0 regionRadius:(double)a1;

- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 regionRadius:(double)a1;

@end
