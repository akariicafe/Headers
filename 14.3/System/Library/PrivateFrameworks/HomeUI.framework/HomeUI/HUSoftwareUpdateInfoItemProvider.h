@class HMHome, NSMutableSet;

@interface HUSoftwareUpdateInfoItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *softwareUpdateItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHome:(id)a0;
- (id)items;
- (id)invalidationReasons;
- (id)reloadItems;

@end
