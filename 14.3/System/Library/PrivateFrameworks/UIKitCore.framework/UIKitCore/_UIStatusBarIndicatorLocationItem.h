@interface _UIStatusBarIndicatorLocationItem : _UIStatusBarIndicatorItem

@property (nonatomic) long long previousType;

- (id)imageNameForUpdate:(id)a0;
- (id)indicatorEntryKey;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)initWithIdentifier:(id)a0 statusBar:(id)a1;

@end
