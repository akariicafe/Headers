@class NSUUID;

@interface CXVoicemailAction : CXAction

@property (copy, nonatomic) NSUUID *voicemailUUID;

+ (BOOL)supportsSecureCoding;

- (id)customDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithVoicemailUUID:(id)a0;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;

@end
