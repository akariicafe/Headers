@interface APSyncMediaRemoteATVVolumeControlListener : NSObject {
    const void *_callbackContext;
    void /* function */ *_volumeControlTypeDidChange;
}

- (void)dealloc;
- (id)initWithContextAndCallback:(void /* function */ *)a0 callbackContext:(const void *)a1;
- (void)_volumeControlTypeChanged:(struct __CFDictionary { } *)a0;

@end
