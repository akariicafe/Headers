@interface AVAudioTime : NSObject {
    struct AudioTimeStamp { double mSampleTime; unsigned long long mHostTime; double mRateScalar; unsigned long long mWordClockTime; struct SMPTETime { short mSubframes; short mSubframeDivisor; unsigned int mCounter; unsigned int mType; unsigned int mFlags; short mHours; short mMinutes; short mSeconds; short mFrames; } mSMPTETime; unsigned int mFlags; unsigned int mReserved; } _ats;
    double _sampleRate;
    void *_reserved;
}

@property (readonly, nonatomic, getter=isHostTimeValid) BOOL hostTimeValid;
@property (readonly, nonatomic) unsigned long long hostTime;
@property (readonly, nonatomic, getter=isSampleTimeValid) BOOL sampleTimeValid;
@property (readonly, nonatomic) long long sampleTime;
@property (readonly, nonatomic) double sampleRate;
@property (readonly, nonatomic) struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } audioTimeStamp;

+ (double)secondsForHostTime:(unsigned long long)a0;
+ (id)timeWithAudioTimeStamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a0 sampleRate:(double)a1;
+ (id)timeWithHostTime:(unsigned long long)a0 sampleTime:(long long)a1 atRate:(double)a2;
+ (id)timeWithHostTime:(unsigned long long)a0;
+ (unsigned long long)hostTimeForSeconds:(double)a0;
+ (id)timeWithSampleTime:(long long)a0 atRate:(double)a1;

- (id)initWithAudioTimeStamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a0 sampleRate:(double)a1;
- (id)extrapolateTimeFromAnchor:(id)a0;
- (id)description;
- (id)initWithHostTime:(unsigned long long)a0 sampleTime:(long long)a1 atRate:(double)a2;
- (id)init;
- (id)initWithHostTime:(unsigned long long)a0;
- (id)initWithSampleTime:(long long)a0 atRate:(double)a1;

@end
