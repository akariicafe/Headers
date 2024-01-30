@class NSString, UIImage, NSArray, NSURL, HFAudioPlayer, UIImageView, UIButton, UIVisualEffectView, UILabel, UIColor;

@interface HURecordedWaveformView : UIView <HFAudioPlayerDelegate>

@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImageView *waveformImageView;
@property (retain, nonatomic) UIImage *waveformImage;
@property (retain, nonatomic) UIButton *playRecordingButton;
@property (nonatomic) double minTimeLabelWidth;
@property (retain, nonatomic) UIColor *waveformColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) HFAudioPlayer *audioPlayer;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSArray *audioPowerLevels;
@property (retain, nonatomic) NSURL *audioFileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)setAlpha:(double)a0;
- (void).cxx_destruct;
- (void)audioPlayer:(id)a0 didPausePlaybackWithReason:(id)a1;
- (void)audioPlayerDidStopPlayback:(id)a0;
- (void)audioPlayerDidResumePlayback:(id)a0;
- (void)audioPlayer:(id)a0 didUpdatePlaybackTime:(double)a1;
- (void)audioPlayerDidFinishPlayback:(id)a0 withError:(id)a1;
- (void)_playRecording:(id)a0;
- (id)_waveFormImageForWidth:(double)a0 havingColor:(id)a1;
- (void)_updateProgressForPlaybackTime:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 waveformColor:(id)a1 backgroundColor:(id)a2 tintColor:(id)a3;

@end
