@class NSString, VSSpeechSynthesisCallbackResult, NSLock;

@interface VSSpeechEngine : NSObject

@property (retain, nonatomic) NSString *voicePath;
@property (nonatomic) void *synthesizer;
@property (retain, nonatomic) VSSpeechSynthesisCallbackResult *currentCallbackResult;
@property (retain, nonatomic) NSLock *synthesisLock;
@property (nonatomic) unsigned long long pcmBufferSize;
@property (readonly, nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (nonatomic) float rate;
@property (nonatomic) float pitch;
@property (nonatomic) float volume;

+ (BOOL)hasPhaticResponses:(id)a0;
+ (id)mimeForFileExtension:(id)a0;
+ (BOOL)isUserCancelError:(id)a0;

- (void)preheat;
- (void).cxx_destruct;
- (void)dealloc;
- (id)synthesizeText:(id)a0 loggable:(BOOL)a1 callback:(id /* block */)a2;
- (id)initWithVoicePath:(id)a0 resourcePath:(id)a1;
- (void)stopAtMarker:(long long)a0;
- (id)loadResource:(id)a0 error:(id *)a1;
- (void)unloadResource:(id)a0;
- (id)loadResourceAtPath:(id)a0 mimeType:(id)a1 error:(id *)a2;
- (BOOL)initializeWithResourcePath:(id)a0;

@end
