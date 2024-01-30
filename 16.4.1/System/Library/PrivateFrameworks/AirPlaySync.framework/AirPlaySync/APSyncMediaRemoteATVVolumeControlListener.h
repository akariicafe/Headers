@interface APSyncMediaRemoteATVVolumeControlListener : NSObject {
    const void *_callbackContext;
    void /* function */ *_volumeControlTypeDidChange;
}

- (void)dealloc;
- (void)_volumeControlTypeChanged:(struct __CFDictionary { } *)a0;
- (id)initWithContextAndCallback:(void /* function */ *)a0 callbackContext:(const void *)a1;

@end
