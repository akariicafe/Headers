@interface CXSetMutedCallAction : CXCallAction

@property (nonatomic, getter=isMuted) BOOL muted;

+ (BOOL)supportsSecureCoding;

- (id)customDescription;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (id)initWithCallUUID:(id)a0 muted:(BOOL)a1;

@end
