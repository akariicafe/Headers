@class FigDelegateStorage;

@interface FigCameraViewfinderSession : NSObject {
    FigDelegateStorage *_delegateStorage;
}

- (void)openPreviewStreamWithOptions:(id)a0;
- (void)closePreviewStream;
- (id)init;
- (void)dealloc;

@end
