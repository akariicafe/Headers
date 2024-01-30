@interface TUDTMFSoundPlayer : NSObject

@property (copy, nonatomic) id /* block */ playSystemSoundHandler;

- (BOOL)attemptToPlayKey:(unsigned char)a0;
- (id)init;
- (void).cxx_destruct;
- (void)attemptToPlaySoundType:(long long)a0;

@end
