@interface CXSetHeldCallAction : CXCallAction

@property (nonatomic, getter=isOnHold) BOOL onHold;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)customDescription;
- (id)initWithCoder:(id)a0;
- (id)initWithCallUUID:(id)a0 onHold:(BOOL)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
