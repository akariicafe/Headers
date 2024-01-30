@interface TSCHChartTypeDonut : TSCHChartTypePieFamily

- (id)init;
- (id)name;
- (id)defaultSeriesType:(unsigned long long)a0;
- (id)userInterfaceName;
- (Class)chartLayoutItemClass;
- (long long)userInterfaceTag;
- (double)defaultLabelExplosionValue;
- (id)localizedDeliveryTypeForWedge;
- (id)unlocalizedDeliveryTypeForWedge;
- (id)localizedTitleForDeliveryTypeWedge;
- (id)localizedWedgeDragLabelWithPercent:(unsigned long long)a0;
- (id)localizedActionStringForWedgeExplosion;
- (id)alternateArchiveChartTypeAndReturnWriterVersion:(unsigned long long *)a0 readerVersion:(unsigned long long *)a1 featureID:(id *)a2;

@end
