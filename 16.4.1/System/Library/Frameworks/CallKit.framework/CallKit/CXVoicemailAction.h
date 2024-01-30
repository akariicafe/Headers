@class NSUUID;

@interface CXVoicemailAction : CXAction

@property (copy, nonatomic) NSUUID *voicemailUUID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVoicemailUUID:(id)a0;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
