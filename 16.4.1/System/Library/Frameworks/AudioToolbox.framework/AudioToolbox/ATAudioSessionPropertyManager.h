@class ATAudioSessionClientImpl;

@interface ATAudioSessionPropertyManager : NSObject {
    ATAudioSessionClientImpl *mAsClientImpl;
}

- (int)SetProperty:(unsigned int)a0 size:(unsigned int)a1 data:(const void *)a2;
- (int)GetProperty:(unsigned int)a0 size:(unsigned int *)a1 data:(void *)a2;
- (void).cxx_destruct;
- (id)initWithATAudioSessionClientImpl:(id)a0;

@end
