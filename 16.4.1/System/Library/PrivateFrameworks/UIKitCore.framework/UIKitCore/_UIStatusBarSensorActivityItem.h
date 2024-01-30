@class _UIStatusBarSensorActivityView;

@interface _UIStatusBarSensorActivityItem : _UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarSensorActivityView *sensorActivityIndicator;

- (id)viewForIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)dependentEntryKeys;
- (void).cxx_destruct;
- (void)_create_sensorActivityIndicator;

@end
