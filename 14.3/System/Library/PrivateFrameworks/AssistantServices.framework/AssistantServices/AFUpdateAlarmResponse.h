@class NSArray;

@interface AFUpdateAlarmResponse : AFSiriResponse

@property (copy, nonatomic) NSArray *alarmIdentifiers;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setAlarmIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
