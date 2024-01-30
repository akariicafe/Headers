@interface HFAbstractControlStatusItem : HFStatusItem

+ (BOOL)_isControlItem:(id)a0 similarToControlItem:(id)a1;
+ (BOOL)_isControlItem:(id)a0 identicalToControlItem:(id)a1;

- (id)serviceTypes;
- (id)_buildServiceItemsForServices:(id)a0;
- (id)_aggregatedValueSourceWithServiceItems:(id)a0;
- (id)_primaryServiceDescriptorForServices:(id)a0;
- (BOOL)supportsInvalidation;
- (id)standardResultsForBatchReadResponse:(id)a0 serviceTypes:(id)a1;
- (id)_buildControlItemsForServices:(id)a0;

@end
