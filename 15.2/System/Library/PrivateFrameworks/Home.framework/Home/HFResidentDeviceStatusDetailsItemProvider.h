@class HMHome, NSMutableSet;

@interface HFResidentDeviceStatusDetailsItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *residentDeviceItems;
@property (readonly, nonatomic) HMHome *home;
@property (copy, nonatomic) id /* block */ filter;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;

@end
