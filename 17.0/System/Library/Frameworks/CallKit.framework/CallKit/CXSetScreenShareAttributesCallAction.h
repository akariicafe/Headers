@class CXScreenShareAttributes;

@interface CXSetScreenShareAttributesCallAction : CXCallAction

@property (retain, nonatomic) CXScreenShareAttributes *attributes;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)customDescription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCallUUID:(id)a0 attributes:(id)a1;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
