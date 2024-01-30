@class HFTriggerBuilder;

@interface HUShortcutItem : HFItem <NSCopying>

@property (readonly, nonatomic) BOOL selectable;
@property (readonly, nonatomic) HFTriggerBuilder *triggerBuilder;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithTriggerBuilder:(id)a0 selectable:(BOOL)a1;

@end
