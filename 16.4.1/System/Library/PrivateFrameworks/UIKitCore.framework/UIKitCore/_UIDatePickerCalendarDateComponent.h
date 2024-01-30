@class NSCalendar, NSDateComponents, NSDate;

@interface _UIDatePickerCalendarDateComponent : NSObject <NSCopying> {
    NSDate *_date;
}

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSDateComponents *components;
@property (readonly, nonatomic) NSCalendar *calendar;

+ (id)inlineDescriptionForComponents:(id)a0;
+ (unsigned long long)representedCalendarUnits;

- (id)initWithDate:(id)a0 calendar:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
