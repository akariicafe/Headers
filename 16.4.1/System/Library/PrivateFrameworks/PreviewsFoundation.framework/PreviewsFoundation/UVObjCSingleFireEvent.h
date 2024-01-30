@class _TtC18PreviewsFoundation19ObjcSingleFireEvent;

@interface UVObjCSingleFireEvent : NSObject {
    _TtC18PreviewsFoundation19ObjcSingleFireEvent *_event;
}

@property (readonly, nonatomic) BOOL hasFired;

- (void)fire;
- (void)addObserver:(id /* block */)a0;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;

@end
