@class NSString, NSMapTable;
@protocol HUHomePodAlarmItemModuleControllerDelegate;

@interface HUHomePodAlarmItemModuleController : HUItemTableModuleController <HUAlarmTableViewCellDelegate>

@property (readonly, nonatomic) NSMapTable *cellToItemMap;
@property (weak, nonatomic) id<HUHomePodAlarmItemModuleControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL allowsCellSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)canSelectItem:(id)a0;
- (id)initWithModule:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (BOOL)_shouldAllowCellSelection;
- (void)setAlarmEnabled:(BOOL)a0 forCell:(id)a1;
- (unsigned long long)didSelectItem:(id)a0;

@end
