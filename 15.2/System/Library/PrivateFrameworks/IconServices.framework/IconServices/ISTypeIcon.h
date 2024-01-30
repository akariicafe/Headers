@class NSString;

@interface ISTypeIcon : ISBindableIcon

@property (readonly) NSString *type;

+ (BOOL)supportsSecureCoding;

- (id)symbol;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)_fallbackKey;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)makeResourceProvider;
- (id)initWithType:(id)a0;

@end
