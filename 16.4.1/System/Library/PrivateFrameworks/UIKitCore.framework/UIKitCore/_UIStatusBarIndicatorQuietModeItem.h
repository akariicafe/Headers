@class _UIStatusBarIdentifier, _UIStatusBarImageView, NSString;

@interface _UIStatusBarIndicatorQuietModeItem : _UIStatusBarIndicatorItem

@property (class, readonly) _UIStatusBarIdentifier *emphasizedQuietModeIdentifier;

@property (retain, nonatomic) _UIStatusBarImageView *emphasizedImageView;
@property (retain, nonatomic) NSString *focusName;

- (BOOL)shouldUpdateIndicatorForIdentifier:(id)a0;
- (id)viewForIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)systemImageNameForUpdate:(id)a0;
- (id)imageViewForIdentifier:(id)a0;
- (void)_create_emphasizedImageView;
- (id)indicatorEntryKey;
- (void).cxx_destruct;

@end
