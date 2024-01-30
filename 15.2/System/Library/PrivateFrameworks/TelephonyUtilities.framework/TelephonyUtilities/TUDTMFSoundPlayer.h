@interface TUDTMFSoundPlayer : NSObject

@property (copy, nonatomic) id /* block */ playSystemSoundHandler;

- (void)attemptToPlaySoundType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)attemptToPlayKey:(unsigned char)a0;

@end
