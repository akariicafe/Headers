@class CUCaptureController, NSString, CAMAnalyticsCaptureEvent, CAMPanoramaView, UITapGestureRecognizer;

@interface CAMPanoramaViewController : UIViewController <CAMPanoramaViewDelegate, CAMPanoramaChangeDelegate>

@property (readonly, nonatomic) CUCaptureController *_captureController;
@property (nonatomic, getter=isPainting, setter=_setPainting:) BOOL painting;
@property (nonatomic, setter=_setCaptureOrientation:) long long _captureOrientation;
@property (readonly, nonatomic) UITapGestureRecognizer *_directionChangeGestureRecognizer;
@property (readonly, nonatomic) CAMPanoramaView *panoramaView;
@property (nonatomic) long long layoutStyle;
@property (retain, nonatomic) CAMAnalyticsCaptureEvent *analyticsCaptureEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)updateWithStatus:(id)a0;
- (void)startProcessingPanorama;
- (void)finishedProcessingPanorama;
- (id)initWithCaptureController:(id)a0 layoutStyle:(long long)a1;
- (void)startPainting;
- (void)stopPainting;
- (void)didChangeToCaptureOrientation:(long long)a0;
- (void)_handleDirectionChange:(id)a0;
- (void)panoramaViewDidRequestSynchronizedDirectionChange:(id)a0 toDirection:(long long)a1;
- (void)panoramaView:(id)a0 didUpdateInstruction:(long long)a1;
- (void)panoramaConfigurationDidChangeWithDirection:(long long)a0;

@end
