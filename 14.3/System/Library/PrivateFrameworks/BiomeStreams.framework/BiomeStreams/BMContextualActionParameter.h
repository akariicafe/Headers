@class NSString, NSDictionary;

@interface BMContextualActionParameter : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *parameterType;
@property (readonly, nonatomic) NSDictionary *parameterMetadata;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(id)a0 metadata:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
