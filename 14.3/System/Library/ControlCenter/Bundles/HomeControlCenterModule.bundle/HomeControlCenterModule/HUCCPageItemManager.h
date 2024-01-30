@interface HUCCPageItemManager : HFItemManager

@property (nonatomic, getter=isHomeAppRemoved) BOOL homeAppRemoved;
@property (readonly, nonatomic) BOOL shouldShowScenesPage;
@property (readonly, nonatomic) BOOL shouldShowServicesPage;

- (id)_buildItemProvidersForHome:(id)a0;

@end
