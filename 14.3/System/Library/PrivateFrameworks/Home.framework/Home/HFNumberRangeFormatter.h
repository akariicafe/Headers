@class NSFormatter;

@interface HFNumberRangeFormatter : NSFormatter

@property (retain, nonatomic) NSFormatter *numberFormatter;
@property (nonatomic) BOOL consolidatesUnit;

- (BOOL)_isRTL;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)a0;
- (id)initWithNumberFormatter:(id)a0;
- (id)stringForNumberRange:(id)a0;
- (BOOL)_shouldRemoveUnitFromMinimumFormattedValue:(id)a0;
- (BOOL)_shouldRemoveUnitFromMaximumFormattedValue:(id)a0;

@end
