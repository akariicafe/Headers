@class HMDProcessInfo, HMDCameraSnapshotSessionID;

@interface HMDSnapshotSessionApplicationID : HMFObject <NSCopying>

@property (readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID;
@property (readonly, nonatomic) HMDProcessInfo *processInfo;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSessionID:(id)a0 processInfo:(id)a1;

@end
