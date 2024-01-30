@interface CMStrideCalibrationEntry : NSObject <NSSecureCoding, NSCopying> {
    struct CLStrideCalEntry { int recordId; double startTime; unsigned int pacebin; double kvalue; double kvalueTrack; double score; double endTime; double distance; int steps; int session; double speed; double percentGrade; int gpsSource; double timestamp; double runningFormStrideLength; int runningFormStrideLengthMetrics; } _strideCalStruct;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) int steps;
@property (readonly, nonatomic) double speed;
@property (readonly, nonatomic) double percentGrade;
@property (readonly, nonatomic) long long gpsSource;

- (double)score;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)session;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned int)pacebin;
- (id)initWithCLStrideCalEntry:(struct CLStrideCalEntry { int x0; double x1; unsigned int x2; double x3; double x4; double x5; double x6; double x7; int x8; int x9; double x10; double x11; int x12; double x13; double x14; int x15; })a0;
- (double)kvalue;
- (double)kvalueTrack;

@end
