@class NSArray;

@interface AFGetSettingsRequest : AFSiriRequest

@property (copy, nonatomic) NSArray *settings;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (void)encodeWithCoder:(id)a0;

@end
