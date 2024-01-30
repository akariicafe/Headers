@interface TSCHChartTypeDonut : TSCHChartTypePieFamily

- (id)init;
- (id)name;
- (id)unlocalizedDeliveryTypeForWedge;
- (id)alternateArchiveChartTypeAndReturnWriterVersion:(unsigned long long *)a0 readerVersion:(unsigned long long *)a1 featureID:(id *)a2;
- (Class)chartLayoutItemClass;
- (double)defaultLabelExplosionValue;
- (id)defaultSeriesType:(unsigned long long)a0;
- (id)localizedActionStringForWedgeExplosion;
- (id)localizedDeliveryTypeForWedge;
- (id)localizedTitleForDeliveryTypeWedge;
- (id)localizedWedgeDragLabelWithPercent:(unsigned long long)a0;
- (id)userInterfaceName;
- (long long)userInterfaceTag;

@end
