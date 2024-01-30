@class CMOdometerSuitabilityManagerProxy;

@interface CMOdometerSuitabilityManager : NSObject

@property (readonly, nonatomic) CMOdometerSuitabilityManagerProxy *odometerSuitabilityManagerProxy;

- (void)dealloc;
- (id)init;
- (void)startOdometerSuitabilityUpdatesWithHandler:(id /* block */)a0;
- (void)stopOdometerSuitabilityUpdates;

@end
