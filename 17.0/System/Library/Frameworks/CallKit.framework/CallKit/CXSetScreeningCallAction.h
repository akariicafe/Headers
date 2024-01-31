@interface CXSetScreeningCallAction : CXCallAction

@property (nonatomic, getter=isScreening) BOOL screening;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)customDescription;
- (id)initWithCoder:(id)a0;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCallUUID:(id)a0 screening:(BOOL)a1;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
