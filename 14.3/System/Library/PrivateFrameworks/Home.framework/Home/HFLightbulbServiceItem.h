@interface HFLightbulbServiceItem : HFServiceItem

+ (id)supportedServiceTypes;

- (id)lightProfile;
- (BOOL)containsActions;
- (id)currentStateActionBuildersForHome:(id)a0;
- (id)createControlItems;
- (id)_subclass_updateWithOptions:(id)a0;

@end
