@interface HKOverlayPillValueProvider : NSObject <HKOverlayPillValueProviding>

- (id)valueFromChartPoints:(id)a0 unit:(id)a1 displayType:(id)a2 unitPreferenceController:(id)a3;
- (id)_formattedQuantity:(id)a0 displayType:(id)a1;
- (id)_formattedQuantityRange:(id)a0 displayType:(id)a1;
- (id)_quantityRangeFromChartPoints:(id)a0 unit:(id)a1 displayType:(id)a2 unitPreferenceController:(id)a3;
- (id)_unitFromQuantityRange:(id)a0 displayType:(id)a1;
- (id)_valueFromQuantityRange:(id)a0 displayType:(id)a1;

@end
