@class NSString, SFSSTTSEngineCallbackResult;

@interface SFSSTTSEngine : NSObject {
    struct unique_ptr<TTSSynthesizer, std::default_delete<TTSSynthesizer>> { struct __compressed_pair<TTSSynthesizer *, std::default_delete<TTSSynthesizer>> { struct TTSSynthesizer *__value_; } __ptr_; } _synthesizer;
}

@property (retain, nonatomic) NSString *voicePath;
@property (retain, nonatomic) SFSSTTSEngineCallbackResult *callbackResult;
@property (readonly, nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;

- (void)preheat;
- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (void)stopSynthesis;
- (id)initWithVoicePath:(id)a0 resourcePath:(id)a1;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })constructPcmAsbdWithSampleRate:(float)a0;
- (id)loadResourceAtPath:(id)a0 mimeType:(id)a1;
- (id)synthesizeText:(id)a0 loggable:(BOOL)a1 synthesisBegin:(id /* block */)a2 synthesisChunk:(id /* block */)a3 synthesisEnd:(id /* block */)a4;

@end
