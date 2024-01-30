@interface OKSoundEffect : NSObject {
    unsigned int _soundID;
}

+ (void)playSoundEffectAtURL:(id)a0;
+ (id)soundEffectAtURL:(id)a0;

- (void)play;
- (void)dealloc;
- (id)initWithSoundURL:(id)a0;

@end
