@class NSArray;

@interface AFGetSettingsResponse : AFSiriResponse

@property (copy, nonatomic) NSArray *settings;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
