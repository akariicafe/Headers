@class NSString;

@interface WKDateTimeInputControl : WKFormPeripheralBase

@property (readonly, nonatomic) NSString *dateTimePickerCalendarType;
@property (readonly, nonatomic) double timePickerValueHour;
@property (readonly, nonatomic) double timePickerValueMinute;

- (id)initWithView:(id)a0;
- (void)setTimePickerHour:(long long)a0 minute:(long long)a1;

@end
