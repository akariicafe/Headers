@interface CXEnableVideoCallAction : CXCallAction <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;

- (void)encodeWithCoder:(id)a0;
- (id)customDescription;
- (id)initWithCoder:(id)a0;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCallUUID:(id)a0 videoEnabled:(BOOL)a1;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
