@class NSString;

@interface ISTypeIcon : ISBindableIcon

@property (readonly) NSString *type;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)symbol;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(id)a0;
- (id)description;
- (id)_fallbackKey;
- (id)makeResourceProvider;
- (void).cxx_destruct;

@end
