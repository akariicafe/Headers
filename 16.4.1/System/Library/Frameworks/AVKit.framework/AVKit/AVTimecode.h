@interface AVTimecode : NSObject

@property (nonatomic) struct CVSMPTETime { short subframes; short subframeDivisor; unsigned int counter; unsigned int type; unsigned int flags; short hours; short minutes; short seconds; short frames; } timecodeStruct;
@property (nonatomic) long long frameNumber;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameDuration;
@property (nonatomic) unsigned int tc_flags;

- (id)initWithTimecodeString:(id)a0;
- (BOOL)stringIsValidNumericValue:(id)a0;

@end
