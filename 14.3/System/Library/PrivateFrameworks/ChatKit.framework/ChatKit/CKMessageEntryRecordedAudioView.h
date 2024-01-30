@class CKAudioMediaObject, NSString, UIImage, UIImageView, UIButton, UIVisualEffectView, CKAudioController, UILabel;
@protocol CKMessageEntryRecordedAudioViewDelegate;

@interface CKMessageEntryRecordedAudioView : UIView <CKAudioControllerDelegate>

@property (retain, nonatomic) UIButton *playPauseDeleteButton;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIImageView *balloonImageView;
@property (retain, nonatomic) CKAudioController *audioController;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImage *waveformImage;
@property (retain, nonatomic) UIImageView *waveformImageView;
@property (nonatomic) double time;
@property (copy, nonatomic) NSString *timeFormat;
@property (retain, nonatomic) CKAudioMediaObject *audioMediaObject;
@property (readonly, nonatomic) BOOL isPlaying;
@property (weak, nonatomic) id<CKMessageEntryRecordedAudioViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)play;
- (void)audioControllerDidPause:(id)a0;
- (void)audioController:(id)a0 mediaObjectDidFinishPlaying:(id)a1;
- (void)audioControllerPlayingDidChange:(id)a0;
- (void)audioController:(id)a0 mediaObjectProgressDidChange:(id)a1 currentTime:(double)a2 duration:(double)a3;
- (void)audioControllerDidStop:(id)a0;
- (void).cxx_destruct;
- (void)updatePlayPauseDeleteButton;
- (void)handlePlayPauseDelete:(id)a0;
- (void)dealloc;
- (void)stop;
- (void)updateProgress;
- (void)layoutSubviews;
- (void)pause;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTimeString;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
