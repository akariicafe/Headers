@class NSTimeZone, NSString, NSURL, NSDate;

@interface VCPEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) BOOL allDay;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *notes;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
