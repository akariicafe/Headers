@class _UIDatePickerCalendarTimeFormat;

@interface _UIDatePickerCalendarTimeValueStore : NSObject

@property (readonly, nonatomic) unsigned long long *inputBuffer;
@property (readonly, nonatomic) _UIDatePickerCalendarTimeFormat *timeFormat;
@property (nonatomic) unsigned long long hourValue;
@property (nonatomic) unsigned long long minuteValue;
@property (nonatomic) BOOL isPM;
@property (nonatomic) long long minuteInterval;
@property (nonatomic) long long decrementBehaviour;

- (id)initWithTimeFormat:(id)a0 minuteInterval:(long long)a1 decrementBehaviour:(long long)a2;
- (void)setDigits:(unsigned long long)a0 count:(unsigned long long)a1 inScope:(long long)a2 append:(BOOL)a3;
- (unsigned long long)digitsInScope:(long long)a0;
- (void).cxx_destruct;
- (BOOL)roundToMinuteInterval;
- (unsigned long long)__integerInBufferWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)__setIntegerInBuffer:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_setDigits:(unsigned long long)a0 count:(unsigned long long)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 append:(BOOL)a3;
- (void)_verifyInputWithScope:(long long)a0;
- (id)initWithTimeFormat:(id)a0;
- (void)_removeLastDigitInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)incrementDigitForScope:(long long)a0;
- (void)decrementDigitForScope:(long long)a0;
- (void)removeLastDigitInScope:(long long)a0;
- (void)dealloc;

@end
