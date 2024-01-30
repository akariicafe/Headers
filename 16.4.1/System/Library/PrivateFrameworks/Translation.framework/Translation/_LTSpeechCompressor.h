@class NSMutableData;
@protocol _LTSpeechCompressorDelegate;

@interface _LTSpeechCompressor : NSObject {
    id<_LTSpeechCompressorDelegate> _delegate;
    struct OpaqueAudioConverter { } *_audioConverter;
    NSMutableData *_bufferedAudio;
    unsigned long long _packetIndex;
    unsigned long long _bytesConsumed;
}

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)addAudioSampleData:(id)a0;
- (void)startCompressionNarrowband:(BOOL)a0;

@end
