@class HMDProcessInfo, HMDCameraSnapshotSessionID;

@interface HMDSnapshotSessionApplicationID : HMFObject <NSCopying>

@property (readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID;
@property (readonly, nonatomic) HMDProcessInfo *processInfo;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithSessionID:(id)a0 processInfo:(id)a1;

@end
