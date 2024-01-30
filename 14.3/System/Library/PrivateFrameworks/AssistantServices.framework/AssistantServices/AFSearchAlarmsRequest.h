@class STAlarm;

@interface AFSearchAlarmsRequest : AFSiriRequest

@property (nonatomic) long long options;
@property (retain, nonatomic) STAlarm *criteria;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (void)encodeWithCoder:(id)a0;

@end
