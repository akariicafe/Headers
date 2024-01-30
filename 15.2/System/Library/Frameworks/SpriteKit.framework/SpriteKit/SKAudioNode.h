@class AVAudioNode;

@interface SKAudioNode : SKNode <NSSecureCoding> {
    void *_skcAudioNode;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AVAudioNode *avAudioNode;
@property (nonatomic) BOOL autoplayLooped;
@property (nonatomic, getter=isPositional) BOOL positional;

+ (id)_audioURLWithName:(id)a0 bundle:(id)a1;

- (void)commonInit;
- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)audioFile;
- (id)init;
- (void)setAudioURL:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)audioURL;
- (BOOL)isEqualToNode:(id)a0;
- (id)audioFileName;
- (void)setAudioFileName:(id)a0;
- (id)initWithAVAudioNode:(id)a0;
- (id)initWithFileNamed:(id)a0;
- (void)_setAudioName:(id)a0 bundle:(id)a1;
- (id)initWithFileNamed:(id)a0 bundle:(id)a1;
- (void)_playLooped;
- (void)_connectToScene:(id)a0;
- (void *)_makeBackingNode;
- (void)_didMakeBackingNode;

@end
