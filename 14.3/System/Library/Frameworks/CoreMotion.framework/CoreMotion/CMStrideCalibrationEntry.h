@interface CMStrideCalibrationEntry : NSObject <NSSecureCoding, NSCopying> {
    struct { int recordId; double startTime; unsigned int pacebin; double kvalue; double kvalueTrack; double score; double endTime; double distance; int steps; int session; double speed; double percentGrade; int gpsSource; double timestamp; } _strideCalStruct;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) int steps;
@property (readonly, nonatomic) double speed;
@property (readonly, nonatomic) double percentGrade;
@property (readonly, nonatomic) long long gpsSource;

- (int)session;
- (double)kvalue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)score;
- (unsigned int)pacebin;
- (id)initWithCoder:(id)a0;
- (double)kvalueTrack;
- (id)description;
- (id)initWithCLStrideCalEntry:(struct { int x0; double x1; unsigned int x2; double x3; double x4; double x5; double x6; double x7; int x8; int x9; double x10; double x11; int x12; double x13; })a0;
- (void)encodeWithCoder:(id)a0;

@end
