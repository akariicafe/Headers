@interface MSVArtworkServiceRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) Class operationClass;
@property (readonly, nonatomic) long long operationPriority;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
