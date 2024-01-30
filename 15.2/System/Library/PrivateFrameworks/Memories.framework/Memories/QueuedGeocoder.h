@class NSRecursiveLock, NSMapTable, GeocodeRequest, CLGeocoder, VEKReachability;

@interface QueuedGeocoder : NSObject

@property (retain, nonatomic) CLGeocoder *geocoder;
@property (retain, nonatomic) NSMapTable *locationToPlacemarksMap;
@property (retain, nonatomic) NSMapTable *locationToResultMap;
@property (retain, nonatomic) GeocodeRequest *currentRequest;
@property (retain, nonatomic) VEKReachability *reachability;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) double placemarkDifferentationDistance;

+ (id)sharedGeocoder;

- (void).cxx_destruct;
- (void)reverseGeocodeLocation:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (id)_init;
- (void)dequeueRequest;

@end
