@interface WebInterruptionObserverHelper : NSObject {
    void *_callback;
}

- (id)initWithCallback:(void *)a0;
- (void)dealloc;
- (void)clearCallback;
- (void)interruption:(id)a0;

@end
