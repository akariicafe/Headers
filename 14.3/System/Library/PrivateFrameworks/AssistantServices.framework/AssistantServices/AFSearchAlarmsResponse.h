@class NSArray;

@interface AFSearchAlarmsResponse : AFSiriResponse

@property (copy, nonatomic) NSArray *results;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
