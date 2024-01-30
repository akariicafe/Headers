@class NSString;

@interface PPCalendar : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *calendarIdentifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) struct CGColor { } *color;

- (BOOL)isEqualToCalendar:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithCalendarIdentifier:(id)a0 title:(id)a1 color:(struct CGColor { } *)a2;
- (BOOL)isEqual:(id)a0;
- (id)initWithEKCalendar:(id)a0 internPool:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
