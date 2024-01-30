@class HMHome, NSMutableSet;

@interface HFResidentDeviceItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *residentDeviceItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;

@end
