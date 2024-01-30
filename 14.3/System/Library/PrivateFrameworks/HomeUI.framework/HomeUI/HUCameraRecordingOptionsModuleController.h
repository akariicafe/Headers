@class NSString;

@interface HUCameraRecordingOptionsModuleController : HUItemTableModuleController <HUSwitchCellDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModule:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (unsigned long long)didSelectItem:(id)a0;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (BOOL)isItemHeader:(id)a0;

@end
