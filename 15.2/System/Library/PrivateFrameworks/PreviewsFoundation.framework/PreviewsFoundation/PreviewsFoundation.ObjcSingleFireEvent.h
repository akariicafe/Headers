@interface PreviewsFoundation.ObjcSingleFireEvent : NSObject {
    void /* unknown type, empty encoding */ event;
}

@property (nonatomic, readonly) BOOL hasFired;

- (void)addObserver:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)fire;
- (void)cancel;

@end
