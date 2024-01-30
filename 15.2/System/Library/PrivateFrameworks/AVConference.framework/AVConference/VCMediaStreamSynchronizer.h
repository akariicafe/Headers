@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface VCMediaStreamSynchronizer : NSObject <VCMediaStreamSyncSourceDelegate> {
    double _sourcePlayoutSampleSystemTime;
    int _sourceRTPTimestampWraps;
    NSObject<OS_dispatch_queue> *_mediaStreamSynchronizerQueue;
    struct tagHANDLE { int x0; } *_videoPlayerHandle;
    id /* block */ _destinationHandler;
    struct tagVCMediaStreamSyncTime { double ntpTime; long long sampleRate; unsigned int rtpTimestampOfNTP; } _source;
    struct tagVCMediaStreamSyncTime { double ntpTime; long long sampleRate; unsigned int rtpTimestampOfNTP; } _destination;
    unsigned int _sourcePlayoutSampleRTPTimestamp;
    int _sourceState;
}

@property (readonly, nonatomic) unsigned int sourceSampleRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithSourceSampleRate:(unsigned int)a0 destinationSampleRate:(unsigned int)a1;

@end
