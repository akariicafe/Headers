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

- (id)audioBuffer;
- (void)loadIfNeeded;
- (id)fileName;
- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)renderingAlgorithm;
- (id)audioFile;
- (double)duration;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)load;
- (id)copy;
- (void)dealloc;
- (void)_load;
- (id)audioBufferFormat;
- (id)initWithAVAudioPCMBuffer:(id)a0;
- (void)_loadURLWithBundle:(id)a0;
- (id)initWithFileNamed:(id)a0 inBundle:(id)a1;
- (id)initWithFileNamed:(id)a0;
- (void)_customEncodingOfSCNAudioSource:(id)a0;
- (void)_customDecodingOfSCNAudioSource:(id)a0;

@end
