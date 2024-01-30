@interface CXSetPlayedVoicemailAction : CXVoicemailAction

@property (nonatomic, getter=isPlayed) BOOL played;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (id)initWithVoicemailUUID:(id)a0 played:(BOOL)a1;

@end
