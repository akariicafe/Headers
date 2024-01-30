@class NSUUID, NSDate;

@interface CMSkiData : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long fRecordId;
    NSUUID *fSourceId;
    NSUUID *fSessionId;
    NSDate *fStartDate;
    NSDate *fEndDate;
    double fRunDistance;
    double fRunAvgSpeed;
    double fRunMaxSpeed;
    double fRunSlope;
    double fRunElevationDescent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long recordId;
@property (readonly, nonatomic) NSUUID *sourceId;
@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double runDistance;
@property (readonly, nonatomic) double runAvgSpeed;
@property (readonly, nonatomic) double runMaxSpeed;
@property (readonly, nonatomic) double runSlope;
@property (readonly, nonatomic) double runElevationDescent;

- (id)initWithRecordId:(unsigned long long)a0 sourceId:(id)a1 sessionId:(id)a2 startDate:(id)a3 endDate:(id)a4 runDistance:(double)a5 runAvgSpeed:(double)a6 runMaxSpeed:(double)a7 runSlope:(double)a8 runElevationDescent:(double)a9;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithSessionId:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithSkiEntry:(const struct CLSkiEntry { unsigned long long x0; unsigned char x1[16]; unsigned char x2[16]; double x3; double x4; double x5; double x6; double x7; double x8; double x9; } *)a0;
- (void)convertToSkiEntry:(struct CLSkiEntry { unsigned long long x0; unsigned char x1[16]; unsigned char x2[16]; double x3; double x4; double x5; double x6; double x7; double x8; double x9; } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
