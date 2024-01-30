@class NSRecursiveLock, NSMapTable, Reachability, GeocodeRequest, CLGeocoder;

@interface QueuedGeocoder : NSObject

@property (retain, nonatomic) CLGeocoder *geocoder;
@property (retain, nonatomic) NSMapTable *locationToPlacemarksMap;
@property (retain, nonatomic) NSMapTable *locationToResultMap;
@property (retain, nonatomic) GeocodeRequest *currentRequest;
@property (retain, nonatomic) Reachability *reachability;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) double placemarkDifferentationDistance;

+ (id)sharedGeocoder;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)reverseGeocodeLocation:(id)a0 completionHandler:(id /* block */)a1;
- (void)dequeueRequest;

@end
