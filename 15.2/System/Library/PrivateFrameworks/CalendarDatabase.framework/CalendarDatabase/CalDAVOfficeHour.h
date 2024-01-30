@class NSDateComponents;

@interface CalDAVOfficeHour : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSDateComponents *startDate;
@property (copy, nonatomic) NSDateComponents *endDate;

+ (id)officeHoursFromICS:(id)a0;
+ (id)icsFromOfficeHours:(id)a0;
+ (id)officeHoursFromData:(id)a0;
+ (id)dataFromOfficeHours:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
