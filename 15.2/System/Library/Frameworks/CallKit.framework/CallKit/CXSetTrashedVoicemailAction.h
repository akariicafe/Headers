@interface CXSetTrashedVoicemailAction : CXVoicemailAction

@property (nonatomic, getter=isTrashed) BOOL trashed;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (id)initWithVoicemailUUID:(id)a0 trashed:(BOOL)a1;

@end
