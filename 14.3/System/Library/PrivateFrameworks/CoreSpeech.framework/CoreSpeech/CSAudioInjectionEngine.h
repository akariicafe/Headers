@class NSUUID, CSAudioInjectionFileOption, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, CSAudioInjectionEngineDelegate, OS_dispatch_source;

@interface CSAudioInjectionEngine : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CSAudioInjectionEngineDelegate> delegate;
@property (nonatomic) unsigned long long audioStreamHandleId;
@property (retain, nonatomic) CSAudioInjectionFileOption *fileOption;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *audioFeedTimer;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } outASBD;
@property (nonatomic) double bufferDuration;
@property (retain, nonatomic) NSMutableArray *injectionAudioFileList;
@property (retain, nonatomic) NSMutableArray *injectionStartNotifyBlocks;
@property (retain, nonatomic) NSMutableArray *injectionCompletionNotifyBlocks;
@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) struct OpaqueAudioConverter { } *deinterleaver;
@property (nonatomic) struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *pNonInterleavedABL;
@property (nonatomic) BOOL didSetScaleFactor;
@property (nonatomic) float scaleFactor;

- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithStreamHandleId:(unsigned long long)a0;
- (BOOL)isAlwaysOnVoiceTriggerAvailable;
- (void)setAlwaysOnVoiceTriggerEnabled:(BOOL)a0;
- (void)startAudioStreamWithOption:(id)a0;
- (void)stopAudioStream;
- (BOOL)injectAudio:(id)a0;
- (BOOL)injectAudio:(id)a0 withScaleFactor:(float)a1 playbackStarted:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)alwaysOnVoiceTriggerEnabled;
- (void)attachDevice:(id)a0;
- (void)_readAudioBufferAndFeed;
- (void)_createDeInterleaverIfNeeded;
- (void)_startAudioFeedingTimer;
- (id)_deinterleaveBufferIfNeeded:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0;
- (id)_compensateChannelDataIfNeeded:(id)a0 receivedNumChannels:(unsigned int)a1;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })_defaultOutASBD;
- (BOOL)injectAudio:(id)a0 withScaleFactor:(float)a1 outASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a2 playbackStarted:(id /* block */)a3 completion:(id /* block */)a4;

@end
