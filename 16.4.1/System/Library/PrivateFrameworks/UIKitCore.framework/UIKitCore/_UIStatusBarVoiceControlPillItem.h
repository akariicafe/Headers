@class _UIStatusBarPillView;

@interface _UIStatusBarVoiceControlPillItem : _UIStatusBarVoiceControlItem

@property (retain, nonatomic) _UIStatusBarPillView *pillView;
@property (nonatomic) struct CGSize { double width; double height; } pillSize;

- (id)viewForIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)_backgroundColorForVoiceControlType:(long long)a0 styleAttributes:(id)a1;
- (void)_create_pillView;
- (id)createDisplayItemForIdentifier:(id)a0;
- (double)imageOpacityForVoiceControlType:(long long)a0;
- (void).cxx_destruct;
- (BOOL)_pulsingForVoiceControlType:(long long)a0;

@end
