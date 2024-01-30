@class NSString;

@interface PPCalendar : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *calendarIdentifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) struct CGColor { } *color;

- (BOOL)isEqualToCalendar:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCalendarIdentifier:(id)a0 title:(id)a1 color:(struct CGColor { } *)a2;
- (id)initWithEKCalendar:(id)a0 internPool:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
