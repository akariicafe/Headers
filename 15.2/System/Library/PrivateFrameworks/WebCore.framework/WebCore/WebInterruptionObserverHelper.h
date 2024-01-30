@interface WebInterruptionObserverHelper : NSObject {
    void *_callback;
}

- (id)initWithCallback:(void *)a0;
- (void)interruption:(id)a0;
- (void)clearCallback;
- (void)dealloc;

@end
