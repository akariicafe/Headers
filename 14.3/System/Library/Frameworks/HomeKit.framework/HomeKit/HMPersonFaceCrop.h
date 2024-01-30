@class NSUUID;

@interface HMPersonFaceCrop : HMFaceCrop <NSMutableCopying>

@property (copy) NSUUID *unassociatedFaceCropUUID;
@property (readonly, copy) NSUUID *personUUID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithUUID:(id)a0 dataRepresentation:(id)a1 dateCreated:(id)a2 faceBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 personUUID:(id)a4;
- (void)encodeWithCoder:(id)a0;

@end
