@class NSUUID;

@interface CXSetGroupCallAction : CXCallAction

@property (copy, nonatomic) NSUUID *callUUIDToGroupWith;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (id)initWithCallUUID:(id)a0 callUUIDToGroupWith:(id)a1;

@end
