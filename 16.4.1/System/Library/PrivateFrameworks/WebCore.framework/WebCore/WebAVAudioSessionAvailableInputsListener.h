@interface WebAVAudioSessionAvailableInputsListener : NSObject {
    void *_callback;
}

- (void)invalidate;
- (void)routeDidChange:(id)a0;
- (id)initWithCallback:(void *)a0 audioSession:(id)a1;

@end
