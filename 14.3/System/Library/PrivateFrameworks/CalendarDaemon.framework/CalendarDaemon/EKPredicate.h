@class NSTimeZone, NSArray, NSString, NSSet, NSDate;

@interface EKPredicate : CADPredicate <NSSecureCoding> {
    NSString *_uuid;
    NSTimeZone *_timeZone;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSArray *calendars;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSSet *restrictedCalendarRowIDs;

- (id)predicateFormat;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCalendars:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
