@class NSDictionary;

@interface INAppResolverOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) BOOL includeUserActivityTypes;
@property (readonly, nonatomic) BOOL skipSupportedIntentsCheck;

+ (id)optionsWithDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
