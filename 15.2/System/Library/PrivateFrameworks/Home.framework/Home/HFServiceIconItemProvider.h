@class NSSet, NSString, HMHome;

@interface HFServiceIconItemProvider : HFItemProvider

@property (copy, nonatomic) NSSet *iconItems;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSString *serviceSubtype;
@property (readonly, nonatomic) HMHome *home;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)initWithServiceType:(id)a0 serviceSubtype:(id)a1 home:(id)a2;

@end
