@class NSError, NSString, NSCondition, NSDate, NSMutableArray, VSMappedData;

@interface VSAudioPlaybackServiceAT : NSObject <VSAudioPlaybackServiceProtocol, AFAudioPowerProviding>

@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (nonatomic) struct OpaqueAudioQueue { } *audioQueue;
@property (nonatomic) long long state;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } waitForStateChangeMutex;
@property (nonatomic) struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } stateChangeCondition;
@property (nonatomic) double enqueuedSampleCount;
@property (nonatomic) struct AudioTimeStamp { double mSampleTime; unsigned long long mHostTime; double mRateScalar; unsigned long long mWordClockTime; struct SMPTETime { short mSubframes; short mSubframeDivisor; unsigned int mCounter; unsigned int mType; unsigned int mFlags; short mHours; short mMinutes; short mSeconds; short mFrames; } mSMPTETime; unsigned int mFlags; unsigned int mReserved; } audioStartTimeStamp;
@property (retain, nonatomic) NSDate *audioQueueStartDate;
@property (retain, nonatomic) NSDate *audioQueueFutureEndDate;
@property (retain, nonatomic) VSMappedData *mappedData;
@property (retain, nonatomic) NSMutableArray *enqueuedMappedAudioInfo;
@property (nonatomic) unsigned long long playingBufferCount;
@property (retain, nonatomic) NSCondition *dequeueCondition;
@property (nonatomic) unsigned int sessionID;
@property (readonly, nonatomic) BOOL discontinuedDuringPlayback;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)start;
- (void)willBeginAccessPower;
- (BOOL)getAveragePower:(float *)a0 andPeakPower:(float *)a1;
- (void)didEndAccessPower;
- (void).cxx_destruct;
- (void)pause;
- (void)dealloc;
- (void)stop;
- (void)handleMediaServerReset;
- (BOOL)isAudioQueueRunning;
- (void)waitForAudioQueueStop;
- (void)enqueue:(id)a0 packetCount:(long long)a1 packetDescriptions:(id)a2;
- (void)flushAndStop;
- (id)audioPowerProvider;
- (id)initWithAudioSessionID:(unsigned int)a0 asbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1;
- (void)dequeueAvailableMappedAudio;
- (id)_enqueueAudioBytesLength:(unsigned int)a0 audioBytes:(const void *)a1 packetCount:(long long)a2 packetDescriptions:(const void *)a3;
- (void)signalQueueRunningStateChange;
- (BOOL)isAudioQueueStalled;

@end
