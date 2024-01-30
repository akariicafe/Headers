@class NSURL;

@interface TLSystemSound : NSObject {
    unsigned int _soundID;
    BOOL _shouldDisposeOfSoundID;
}

@property (readonly, nonatomic) NSURL *soundFileURL;
@property (readonly, nonatomic) unsigned int soundID;
@property (readonly, nonatomic) BOOL requiresLongFormPlayback;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithSoundFileURL:(id)a0 soundID:(unsigned int)a1 requiresLongFormPlayback:(BOOL)a2;

@end
