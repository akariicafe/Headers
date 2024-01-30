@interface RTBluetoothManager : RTService

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsNotificationName:(id)a0;
+ (id)carKitConnectionStateToString:(long long)a0;

- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)_fetchCarKitConnectedStateWithHandler:(id /* block */)a0;
- (void)fetchCarKitConnectedStateWithHandler:(id /* block */)a0;

@end
