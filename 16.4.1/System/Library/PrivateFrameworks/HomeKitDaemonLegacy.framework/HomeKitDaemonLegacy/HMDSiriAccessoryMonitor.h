@class NSMapTable;
@protocol HMDSiriAccessoryMonitorDelegate;

@interface HMDSiriAccessoryMonitor : NSObject

@property (readonly, weak, nonatomic) id<HMDSiriAccessoryMonitorDelegate> delegate;
@property (retain, nonatomic) NSMapTable *accessories;

- (void)_removeAccessory:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_accessoriesTargetingAccessory:(id)a0;
- (void)_addAccessory:(id)a0 withTarget:(id)a1;
- (id)_getInfoForAccessory:(id)a0;
- (void)accessory:(id)a0 setSupportsDragonSiri:(BOOL)a1;
- (BOOL)hasAnyActiveTargetingAccessories;
- (void)setTargetableAccessory:(id)a0 withControllers:(id)a1;

@end
