@class NSHashTable;

@interface HFTemperatureUnitCoordinator : NSObject

@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) BOOL isCelsius;

+ (id)sharedCoordinator;

- (void)registerObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)_updateIsCelsiusNotifyingObservers:(BOOL)a0;
- (void)_temperatureUnitDidChange;
- (void)setIsCelsius:(BOOL)a0;

@end
