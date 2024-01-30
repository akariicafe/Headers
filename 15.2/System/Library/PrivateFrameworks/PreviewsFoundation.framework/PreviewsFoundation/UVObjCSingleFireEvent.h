@class _TtC18PreviewsFoundation19ObjcSingleFireEvent;

@interface UVObjCSingleFireEvent : NSObject {
    _TtC18PreviewsFoundation19ObjcSingleFireEvent *_event;
}

@property (readonly, nonatomic) BOOL hasFired;

- (void)addObserver:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)fire;
- (void)cancel;

@end
