@class NSArray;

@interface AFDeleteAlarmRequest : AFSiriRequest

@property (copy, nonatomic) NSArray *alarmIdentifiers;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (void)encodeWithCoder:(id)a0;

@end
