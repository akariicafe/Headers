@class AVAudioFile, NSString, NSURL, AVAudioPCMBuffer;

@interface SCNAudioSource : NSObject <NSCopying, NSSecureCoding> {
    AVAudioFile *_audioFile;
    AVAudioPCMBuffer *_audioBuffer;
    NSURL *_audioURL;
    NSString *_audioName;
    BOOL _loaded;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isPositional) BOOL positional;
@property (nonatomic) float volume;
@property (nonatomic) float rate;
@property (nonatomic) float reverbBlend;
@property (nonatomic) BOOL loops;
@property (nonatomic) BOOL shouldStream;

+ (id)audioSourceNamed:(id)a0;
+ (id)audioSourceWithAVAudioPCMBuffer:(id)a0;

- (void)loadIfNeeded;
- (void)load;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (long long)renderingAlgorithm;
- (id)fileName;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (void)_load;
- (id)initWithURL:(id)a0;
- (double)duration;
- (void)encodeWithCoder:(id)a0;
- (id)audioBuffer;
- (id)audioFile;
- (id)audioBufferFormat;
- (id)initWithAVAudioPCMBuffer:(id)a0;
- (void)_loadURLWithBundle:(id)a0;
- (id)initWithFileNamed:(id)a0 inBundle:(id)a1;
- (id)initWithFileNamed:(id)a0;
- (void)_customEncodingOfSCNAudioSource:(id)a0;
- (void)_customDecodingOfSCNAudioSource:(id)a0;

@end
