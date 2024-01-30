@class FigDelegateStorage;

@interface FigCameraViewfinderSession : NSObject {
    FigDelegateStorage *_delegateStorage;
}

- (void)closePreviewStream;
- (void)dealloc;
- (void)openPreviewStreamWithOptions:(id)a0;
- (id)init;

@end
