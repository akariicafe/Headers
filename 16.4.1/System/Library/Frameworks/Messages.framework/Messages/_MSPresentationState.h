@interface _MSPresentationState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long presentationStyle;
@property (readonly, nonatomic) unsigned long long presentationContext;

+ (BOOL)isRunningInCameraContext;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;

@end
