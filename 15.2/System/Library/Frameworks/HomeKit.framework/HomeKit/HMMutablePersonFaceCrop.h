@class NSUUID;

@interface HMMutablePersonFaceCrop : HMPersonFaceCrop

@property (copy) NSUUID *unassociatedFaceCropUUID;
@property long long source;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
