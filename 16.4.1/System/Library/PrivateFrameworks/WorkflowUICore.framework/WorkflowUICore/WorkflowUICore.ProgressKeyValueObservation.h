@interface WorkflowUICore.ProgressKeyValueObservation : NSObject {
    void /* unknown type, empty encoding */ progress;
    void /* unknown type, empty encoding */ key;
    void /* unknown type, empty encoding */ keyPath;
    void /* unknown type, empty encoding */ changeHandler;
    void /* unknown type, empty encoding */ observing;
}

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;

@end
