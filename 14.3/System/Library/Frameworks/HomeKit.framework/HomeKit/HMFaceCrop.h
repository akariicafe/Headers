@class NSUUID, NSData, NSDate;

@interface HMFaceCrop : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSData *dataRepresentation;
@property (readonly, copy) NSDate *dateCreated;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceBoundingBox;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithUUID:(id)a0 dataRepresentation:(id)a1 dateCreated:(id)a2 faceBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)encodeWithCoder:(id)a0;

@end
