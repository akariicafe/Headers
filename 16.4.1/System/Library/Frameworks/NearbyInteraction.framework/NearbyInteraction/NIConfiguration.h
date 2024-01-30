@interface NIConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL supportsCameraAssistance;
@property unsigned long long suspensionPolicy;
@property unsigned long long enabledGestures;

+ (id)new;

- (BOOL)hasEqualEnabledGestures:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initInternal;
- (id)init;
- (id)initWithConfiguration:(id)a0;

@end
