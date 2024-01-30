@class NSArray;

@interface HUExpandableItemContainerModule : HFItemModule

@property (readonly, nonatomic) NSArray *expandableModules;

- (BOOL)isOptionItem:(id)a0;
- (BOOL)isShowOptionsItem:(id)a0;
- (BOOL)shouldExpandModuleForShowOptionsItem:(id)a0;
- (void)setModuleExpanded:(BOOL)a0 forItem:(id)a1;
- (id)expandableModuleForItem:(id)a0;

@end
