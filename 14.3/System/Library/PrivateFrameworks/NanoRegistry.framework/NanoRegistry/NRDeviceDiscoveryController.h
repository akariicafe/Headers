@class NSArray;

@interface NRDeviceDiscoveryController : NSObject

@property (readonly, nonatomic) NSArray *devices;

+ (id)sharedInstance;

- (void)begin;
- (void)end;
- (void)overrideSignalStrengthLimit:(long long)a0;
- (id)init;

@end
