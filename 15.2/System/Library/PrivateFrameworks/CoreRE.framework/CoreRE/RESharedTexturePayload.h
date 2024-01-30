@class MTLSharedTextureHandle;

@interface RESharedTexturePayload : RESharedResourcePayload

@property (readonly, nonatomic) MTLSharedTextureHandle *handle;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)initWithTexture:(id)a0;
- (BOOL)hasSameUnderlyingIOSurface:(id)a0;

@end
