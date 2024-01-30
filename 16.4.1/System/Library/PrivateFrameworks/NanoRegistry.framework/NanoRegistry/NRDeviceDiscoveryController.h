@class NSArray;

@interface NRDeviceDiscoveryController : NSObject

@property (readonly, nonatomic) NSArray *devices;

+ (id)sharedInstance;

- (void)begin;
- (void)end;
- (id)init;
- (void)overrideSignalStrengthLimit:(long long)a0;

@end
