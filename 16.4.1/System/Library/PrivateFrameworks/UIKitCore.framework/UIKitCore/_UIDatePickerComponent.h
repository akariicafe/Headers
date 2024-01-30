@class NSString;

@interface _UIDatePickerComponent : NSObject {
    unsigned long long _equivalentUnit;
}

@property (readonly, nonatomic) NSString *formatString;
@property (readonly, nonatomic) unsigned long long calendarUnit;
@property (readonly, nonatomic) unsigned long long equivalentUnit;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } unitRange;
@property (nonatomic) double width;

+ (id)componentsFromDateFormatString:(id)a0 locale:(id)a1;
+ (id)componentsFromDateFormatString:(id)a0 locale:(id)a1 desiredUnits:(long long)a2;

- (id)description;
- (void).cxx_destruct;
- (id)_initWithFormatString:(id)a0 calendarUnit:(unsigned long long)a1;

@end
