@class NSArray;

@interface AFShowAlarmRequest : AFSiriRequest

@property (copy, nonatomic) NSArray *alarms;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (void)encodeWithCoder:(id)a0;

@end
