@interface HFLightbulbServiceItem : HFServiceItem

+ (id)supportedServiceTypes;

- (id)lightProfile;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)createControlItems;
- (BOOL)containsActions;
- (id)currentStateActionBuildersForHome:(id)a0;

@end
