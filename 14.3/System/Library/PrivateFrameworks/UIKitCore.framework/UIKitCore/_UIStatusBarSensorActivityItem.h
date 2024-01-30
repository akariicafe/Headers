@class _UIStatusBarSensorActivityView;

@interface _UIStatusBarSensorActivityItem : _UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarSensorActivityView *sensorActivityIndicator;

- (void).cxx_destruct;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)viewForIdentifier:(id)a0;
- (void)_create_sensorActivityIndicator;
- (id)dependentEntryKeys;

@end
