@class CMOdometerSuitabilityManagerProxy;

@interface CMOdometerSuitabilityManager : NSObject

@property (readonly, nonatomic) CMOdometerSuitabilityManagerProxy *odometerSuitabilityManagerProxy;

- (id)init;
- (void)dealloc;
- (void)startOdometerSuitabilityUpdatesWithHandler:(id /* block */)a0;
- (void)stopOdometerSuitabilityUpdates;

@end
