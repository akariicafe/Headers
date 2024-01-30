@class NSMapTable;
@protocol HMDSiriAccessoryMonitorDelegate;

@interface HMDSiriAccessoryMonitor : NSObject

@property (readonly, weak, nonatomic) id<HMDSiriAccessoryMonitorDelegate> delegate;
@property (retain, nonatomic) NSMapTable *accessories;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_removeAccessory:(id)a0;
- (id)_getInfoForAccessory:(id)a0;
- (BOOL)hasAnyActiveTargetingAccessories;
- (id)_accessoriesTargetingAccessory:(id)a0;
- (void)_addAccessory:(id)a0 withTarget:(id)a1;
- (void)setTargetableAccessory:(id)a0 withControllers:(id)a1;
- (void)accessory:(id)a0 setSupportsDragonSiri:(BOOL)a1;

@end
