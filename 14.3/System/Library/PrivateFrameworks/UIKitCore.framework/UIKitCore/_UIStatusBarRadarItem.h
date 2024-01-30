@class _UIStatusBarRadarView;

@interface _UIStatusBarRadarItem : _UIStatusBarIndicatorItem

@property (retain, nonatomic) _UIStatusBarRadarView *radarItemView;

- (id)indicatorEntryKey;
- (id)imageView;
- (void).cxx_destruct;
- (id)imageForUpdate:(id)a0;
- (id)viewForIdentifier:(id)a0;
- (void)_create_radarItemView;

@end
