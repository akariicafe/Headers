@class NSURL, NSArray;

@interface _UIFocusSoundPool : NSObject {
    NSURL *_soundFileURL;
    unsigned int _originalSystemSoundID;
    NSArray *_queue;
    unsigned long long _queueIndex;
}

- (void).cxx_destruct;
- (id)initWithSoundFileURL:(id)a0;
- (unsigned int)playableSystemSoundID;
- (id)initWithSystemSoundID:(unsigned int)a0;

@end
