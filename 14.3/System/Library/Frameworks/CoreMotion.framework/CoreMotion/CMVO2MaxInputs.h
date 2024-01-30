@class NSDate;

@interface CMVO2MaxInputs : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long fRecordId;
    NSDate *fStartDate;
    double fMets;
    long long fMetSource;
    double fHeartRate;
    double fHeartRateConfidence;
    double fGrade;
    long long fGradeType;
    double fCadence;
    double fPace;
    BOOL fHasGPS;
    BOOL fHasStrideCal;
    long long fWorkoutType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long recordId;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) double mets;
@property (readonly, nonatomic) long long metSource;
@property (readonly, nonatomic) double heartRate;
@property (readonly, nonatomic) double heartRateConfidence;
@property (readonly, nonatomic) double grade;
@property (readonly, nonatomic) long long gradeType;
@property (readonly, nonatomic) double cadence;
@property (readonly, nonatomic) double pace;
@property (readonly, nonatomic) BOOL hasGPS;
@property (readonly, nonatomic) BOOL hasStrideCal;
@property (readonly, nonatomic) long long workoutType;

+ (struct VO2MaxInput { unsigned long long x0; unsigned char x1[16]; float x2; double x3; float x4; float x5; int x6; double x7; BOOL x8; BOOL x9; int x10; long long x11; double x12; double x13; BOOL x14; })VO2MaxInputFromCMVO2MaxInputs:(id)a0;

- (id)initWithRecordId:(unsigned long long)a0 startDate:(id)a1 mets:(double)a2 metSource:(long long)a3 heartRate:(double)a4 heartRateConfidence:(double)a5 grade:(double)a6 gradeType:(long long)a7 cadence:(double)a8 pace:(double)a9 hasGPS:(BOOL)a10 hasStrideCal:(BOOL)a11 workoutType:(long long)a12;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithSample:(struct VO2MaxInput { unsigned long long x0; unsigned char x1[16]; float x2; double x3; float x4; float x5; int x6; double x7; BOOL x8; BOOL x9; int x10; long long x11; double x12; double x13; BOOL x14; })a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
