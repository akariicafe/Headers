@class HFLocationTriggerBuilder;

@interface HULocationTriggerSelectedLocationItem : HFItem

@property (readonly, nonatomic) HFLocationTriggerBuilder *triggerBuilder;
@property (readonly, nonatomic) BOOL locationCanBeEdited;

- (id)init;
- (void).cxx_destruct;
- (id)_locationTitle;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithTriggerBuilder:(id)a0;
- (BOOL)_locationIsHome;

@end
