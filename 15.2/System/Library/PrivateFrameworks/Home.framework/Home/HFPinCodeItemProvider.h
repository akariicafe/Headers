@class NSMutableSet, HMAccessory, HFPinCodeManager, HMHome;

@interface HFPinCodeItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *pinCodeItems;
@property (nonatomic) unsigned long long listType;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) HFPinCodeManager *pinCodeManager;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
- (id)initWithHome:(id)a0 pinCodeManager:(id)a1 listType:(unsigned long long)a2 forAccessory:(id)a3;

@end
