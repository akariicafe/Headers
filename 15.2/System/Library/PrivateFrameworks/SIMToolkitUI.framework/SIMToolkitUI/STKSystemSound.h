@class NSString;

@interface STKSystemSound : STKBaseSound <STKSound> {
    unsigned int _systemSoundID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reallyPlaySound;
- (void)_reallyStopSound;
- (id)initForSystemSoundID:(unsigned int)a0 duration:(double)a1;

@end
