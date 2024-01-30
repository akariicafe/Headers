@class CKAudioProgressView, CKWaveformProgressView, NSString, UILabel;

@interface CKAudioBalloonView : CKColoredBalloonView <CKBalloonVibrancy, CKAudioBalloonView>

@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) CKAudioProgressView *progressView;
@property (retain, nonatomic) CKWaveformProgressView *waveformProgressView;
@property (nonatomic) double time;
@property (nonatomic) double duration;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic, getter=isPlayed) BOOL played;
@property (nonatomic) long long waveformContentMode;
@property (nonatomic, getter=isControlHidden) BOOL controlHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForDisplay;
- (void)updateProgress;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)addOverlaySubview:(id)a0;
- (void)configureForComposition:(id)a0;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2;
- (void)configureForMessagePart:(id)a0;
- (id)nonVibrantSubViews;
- (void)setWaveform:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (void)updateTimeString;
- (void)vibrantContainerWillReparentNonVibrantSubviews:(id)a0;
- (void)waveformProgressViewPanning:(id)a0;

@end
