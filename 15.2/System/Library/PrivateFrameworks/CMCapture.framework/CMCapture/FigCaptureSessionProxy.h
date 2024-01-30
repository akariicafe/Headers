@protocol FigCaptureSessionPreviewTapDelegate;

@interface FigCaptureSessionProxy : NSObject {
    struct OpaqueFigCaptureSession { } *_session;
    long long _identifier;
    BOOL _previewTapOpened;
    id<FigCaptureSessionPreviewTapDelegate> _previewTapDelegate;
}

@property (readonly) long long identifier;

+ (void)initialize;

- (id)initWithFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0 identifier:(long long)a1;
- (void)closePreviewTap;
- (int)openPreviewTapWithDelegate:(id)a0;
- (void)dealloc;

@end
