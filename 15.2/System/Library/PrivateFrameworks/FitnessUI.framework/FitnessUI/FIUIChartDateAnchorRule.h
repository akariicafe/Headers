@interface FIUIChartDateAnchorRule : NSObject

@property (nonatomic) unsigned long long calendarUnit;
@property (nonatomic) long long roundingValue;

- (id)generateAnchorFromDate:(id)a0;
- (id)_floorDate:(id)a0;
- (id)_anchorDiffComponents;
- (BOOL)_componentsSuccessful:(id)a0;

@end
