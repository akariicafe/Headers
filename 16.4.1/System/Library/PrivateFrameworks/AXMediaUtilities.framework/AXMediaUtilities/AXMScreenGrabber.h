@class NSString;

@interface AXMScreenGrabber : NSObject <RPScreenRecorderDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)screenRecorder:(id)a0 didStopRecordingWithPreviewViewController:(id)a1 error:(id)a2;
- (double)_adjustedScaleFactorForInputSize:(struct CGSize { double x0; double x1; })a0 constrainingToPreferredInputSizeFromDetectors:(id)a1;
- (id)_ioSurfaceConfigurationWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)_renderOptionsForSurface:(struct __IOSurface { } *)a0 captureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 displayName:(id)a2 scaleFactor:(double)a3 ignoredLayerContextIDs:(id)a4 includedLayerContextIDs:(id)a5;
- (id)grabScreenWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orientation:(long long)a1 options:(id)a2 metrics:(id)a3 error:(id *)a4;
- (void)recordScreenForDuration:(double)a0 completion:(id /* block */)a1;

@end
