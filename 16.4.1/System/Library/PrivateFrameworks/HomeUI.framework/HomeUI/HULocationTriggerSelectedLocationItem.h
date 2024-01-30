@class HFEventTriggerBuilder;

@interface HULocationTriggerSelectedLocationItem : HFItem

@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder;
@property (readonly, nonatomic) BOOL locationCanBeEdited;

- (id)init;
- (void).cxx_destruct;
- (id)_locationTitle;
- (BOOL)_locationIsHome;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithTriggerBuilder:(id)a0;

@end
