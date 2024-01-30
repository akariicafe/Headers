@interface PreviewsFoundation.ObjcSingleFireEvent : NSObject {
    void /* unknown type, empty encoding */ event;
}

@property (nonatomic, readonly) BOOL hasFired;

- (void)fire;
- (void)addObserver:(id /* block */)a0;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;

@end
