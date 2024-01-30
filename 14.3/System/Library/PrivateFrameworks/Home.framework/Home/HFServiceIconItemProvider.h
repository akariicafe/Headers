@class NSSet, NSString, HMHome;

@interface HFServiceIconItemProvider : HFItemProvider

@property (copy, nonatomic) NSSet *iconItems;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSString *serviceSubtype;
@property (readonly, nonatomic) HMHome *home;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)items;
- (id)initWithServiceType:(id)a0 serviceSubtype:(id)a1 home:(id)a2;
- (id)reloadItems;

@end
