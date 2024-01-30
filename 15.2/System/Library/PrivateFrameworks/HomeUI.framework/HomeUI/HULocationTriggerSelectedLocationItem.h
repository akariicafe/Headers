@class HFEventTriggerBuilder;

@interface HULocationTriggerSelectedLocationItem : HFItem

@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder;
@property (readonly, nonatomic) BOOL locationCanBeEdited;

- (id)_locationTitle;
- (void).cxx_destruct;
- (id)init;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithTriggerBuilder:(id)a0;
- (BOOL)_locationIsHome;

@end
