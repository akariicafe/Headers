@class HMHome, NSMutableSet;

@interface HFResidentDeviceStatusDetailsItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *residentDeviceItems;
@property (readonly, nonatomic) HMHome *home;
@property (copy, nonatomic) id /* block */ filter;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHome:(id)a0;
- (id)items;
- (id)invalidationReasons;
- (id)reloadItems;

@end
