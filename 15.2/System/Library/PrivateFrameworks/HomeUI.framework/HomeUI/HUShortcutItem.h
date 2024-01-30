@class HFTriggerBuilder;

@interface HUShortcutItem : HFItem <NSCopying>

@property (readonly, nonatomic) BOOL selectable;
@property (readonly, nonatomic) HFTriggerBuilder *triggerBuilder;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithTriggerBuilder:(id)a0 selectable:(BOOL)a1;

@end
