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
@property (nonatomic) long long powerProfile;

+ (BOOL)isUserCancelError:(id)a0;
+ (BOOL)hasPhaticResponses:(id)a0;
+ (long long)engineCurrentCompatibility;
+ (id)mimeForFileExtension:(id)a0;
+ (long long)engineMinimumCompatibility;

- (void)preheat;
- (void)dealloc;
- (void).cxx_destruct;
- (void)unloadResource:(id)a0;
- (id)initWithVoicePath:(id)a0 resourcePath:(id)a1;
- (BOOL)initializeWithResourcePath:(id)a0;
- (id)loadResource:(id)a0 error:(id *)a1;
- (id)loadResourceAtPath:(id)a0 mimeType:(id)a1 error:(id *)a2;
- (void)stopAtMarker:(long long)a0;
- (id)synthesizeText:(id)a0 loggable:(BOOL)a1 callback:(id /* block */)a2;

@end
