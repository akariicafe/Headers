@interface HFValveServiceItem : HFServiceItem

+ (id)supportedServiceTypes;

- (BOOL)containsActions;
- (id)currentStateActionBuildersForHome:(id)a0;
- (id)createControlItems;
- (id)_subclass_updateWithOptions:(id)a0;

@end
