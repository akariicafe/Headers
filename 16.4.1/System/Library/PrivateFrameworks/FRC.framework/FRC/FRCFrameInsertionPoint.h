@interface FRCFrameInsertionPoint : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } presentationTimeStamp;
@property (nonatomic) unsigned long long numberOfFramesToInsert;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } interpolatedFrameDuration;

@end
