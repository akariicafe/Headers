@class CKWaveformProgressView;

@interface CKAudioReplyPreviewBalloonView : CKColoredBalloonView

@property (retain, nonatomic) CKWaveformProgressView *waveformProgressView;
@property (nonatomic) double duration;
@property (nonatomic) long long waveformContentMode;

- (void)prepareForDisplay;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (void)configureForComposition:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setWaveform:(id)a0;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)configureForMessagePart:(id)a0;

@end
