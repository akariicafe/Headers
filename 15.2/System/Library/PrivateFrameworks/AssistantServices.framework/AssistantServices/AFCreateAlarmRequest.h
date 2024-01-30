@class STAlarm;

@interface AFCreateAlarmRequest : AFSiriRequest

@property (retain, nonatomic) STAlarm *alarm;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)createResponse;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
