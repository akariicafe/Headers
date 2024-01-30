@class HMHome, NSMutableSet;

@interface HFResidentDeviceItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *residentDeviceItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;

- (id)init;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)items;
- (id)invalidationReasons;
- (id)reloadItems;

@end
