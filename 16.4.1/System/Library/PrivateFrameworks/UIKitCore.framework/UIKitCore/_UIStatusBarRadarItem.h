@class _UIStatusBarRadarView;

@interface _UIStatusBarRadarItem : _UIStatusBarIndicatorItem

@property (retain, nonatomic) _UIStatusBarRadarView *radarItemView;

- (id)imageForUpdate:(id)a0;
- (id)viewForIdentifier:(id)a0;
- (id)imageView;
- (id)indicatorEntryKey;
- (void).cxx_destruct;
- (void)_create_radarItemView;

@end
