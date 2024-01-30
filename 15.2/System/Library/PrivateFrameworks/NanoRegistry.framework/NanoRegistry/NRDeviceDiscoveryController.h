@class NSArray;

@interface NRDeviceDiscoveryController : NSObject

@property (readonly, nonatomic) NSArray *devices;

+ (id)sharedInstance;

- (void)end;
- (void)overrideSignalStrengthLimit:(long long)a0;
- (void)begin;
- (id)init;

@end
