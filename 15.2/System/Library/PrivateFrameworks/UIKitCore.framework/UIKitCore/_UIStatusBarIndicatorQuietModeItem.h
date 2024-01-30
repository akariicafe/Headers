@class _UIStatusBarIdentifier, _UIStatusBarImageView, NSString;

@interface _UIStatusBarIndicatorQuietModeItem : _UIStatusBarIndicatorItem

@property (class, readonly) _UIStatusBarIdentifier *emphasizedQuietModeIdentifier;

@property (retain, nonatomic) _UIStatusBarImageView *emphasizedImageView;
@property (retain, nonatomic) NSString *focusName;

- (id)viewForIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (BOOL)shouldUpdateIndicatorForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)systemImageNameForUpdate:(id)a0;
- (id)imageViewForIdentifier:(id)a0;
- (void)_create_emphasizedImageView;
- (id)indicatorEntryKey;

@end
