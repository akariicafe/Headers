@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface VCMediaStreamSynchronizer : NSObject <VCMediaStreamSyncSourceDelegate> {
    struct tagVCMediaStreamSyncTime { double ntpTime; long long sampleRate; unsigned int rtpTimestampOfNTP; } _source;
    struct tagVCMediaStreamSyncTime { double ntpTime; long long sampleRate; unsigned int rtpTimestampOfNTP; } _destination;
    unsigned int _destinationPlayoutSampleRTPTimestamp;
    int _destinationRTPTimestampWraps;
    double _sourcePlayoutSampleSystemTime;
    unsigned int _sourcePlayoutSampleRTPTimestamp;
    int _sourceRTPTimestampWraps;
    int _sourceState;
    NSObject<OS_dispatch_queue> *_mediaStreamSynchronizerQueue;
    struct tagHANDLE { int x0; } *_videoPlayerHandle;
    id /* block */ _destinationHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)differenceBetweenRtpTimestamp:(unsigned int)a0 rtpTimestamp:(unsigned int)a1;

- (void)dealloc;
- (void)updateSourceState:(int)a0;
- (void)updateSourceNTPTime:(double)a0 withRTPTimeStamp:(unsigned int)a1;
- (void)updateSourcePlayoutSampleRTPTimestamp:(unsigned int)a0 systemTime:(double)a1 uuid:(id)a2;
- (id)initWithSourceSampleRate:(unsigned int)a0 destinationSampleRate:(unsigned int)a1;
- (void)setDestinationAlarmHandler:(id /* block */)a0;
- (void)updateDestinationNTPTime:(double)a0 withRTPTimeStamp:(unsigned int)a1;
- (void)scheduleDestinationPlaybackWithRTPTimestamp:(unsigned int)a0;
- (double)sourceTimeForDestinationRTPTimestamp:(unsigned int)a0;
- (void)callDestinationAlarmHandlerWithTimestamp:(unsigned int)a0 isClosing:(BOOL)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })calculatePlayoutTimeWithRTPTimestamp:(unsigned int)a0;

@end
