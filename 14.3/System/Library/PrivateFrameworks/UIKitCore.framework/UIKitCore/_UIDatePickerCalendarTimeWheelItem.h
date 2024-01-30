@class NSString;

@interface _UIDatePickerCalendarTimeWheelItem : NSObject

@property (readonly, nonatomic) long long rawValue;
@property (readonly, nonatomic) NSString *stringRepresentation;
@property (readonly, nonatomic) unsigned long long cycle;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithRawValue:(long long)a0 stringRepresentation:(id)a1 cycle:(unsigned long long)a2;

@end
