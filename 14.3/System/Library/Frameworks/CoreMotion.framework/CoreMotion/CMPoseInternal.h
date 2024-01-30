@class CMAttitude;

@interface CMPoseInternal : NSObject <NSCopying> {
    CMAttitude *fAttitude;
    struct { double x; double y; double z; } fTranslation;
    double fConsumedAuxTimestamp;
    double fReceivedAuxTimestamp;
    double fMachAbsTimestamp;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqualToPoseInternal:(id)a0;
- (id)initWithPose:(struct { struct { double x0; double x1; double x2; double x3; } x0; struct { double x0; double x1; double x2; } x1; double x2; double x3; double x4; })a0;
- (BOOL)isEqual:(id)a0;

@end
