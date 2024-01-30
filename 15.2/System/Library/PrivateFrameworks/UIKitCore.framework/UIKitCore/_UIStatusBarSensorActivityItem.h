@class _UIStatusBarSensorActivityView;

@interface _UIStatusBarSensorActivityItem : _UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarSensorActivityView *sensorActivityIndicator;

- (id)viewForIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (void)_create_sensorActivityIndicator;
- (id)dependentEntryKeys;
- (void).cxx_destruct;

@end
