@class FigDelegateStorage;

@interface FigCameraViewfinderSession : NSObject {
    FigDelegateStorage *_delegateStorage;
}

- (id)init;
- (void)dealloc;
- (void)closePreviewStream;
- (void)openPreviewStreamWithOptions:(id)a0;

@end
