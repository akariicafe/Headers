@class UIColor, UIFont, CAUITransportButton, NSTimer, UILabel;

@interface CAInterAppAudioTransportView : UIView {
    CAUITransportButton *rewindButton;
    CAUITransportButton *playPauseButton;
    CAUITransportButton *recordButton;
    UILabel *currentTimeLabel;
    UIColor *pauseButtonColor;
    UIColor *playButtonColor;
    struct OpaqueAudioComponentInstance { } *outputUnit;
    struct HostCallbackInfo { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *callBackInfo;
    NSTimer *pollingPlayerTimer;
    BOOL enabled;
    BOOL inForeground;
    double _playTime;
}

@property (getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (retain, nonatomic) UIColor *labelColor;
@property (retain, nonatomic) UIFont *currentTimeLabelFont;
@property (retain, nonatomic) UIColor *rewindButtonColor;
@property (retain, nonatomic) UIColor *playButtonColor;
@property (retain, nonatomic) UIColor *pauseButtonColor;
@property (retain, nonatomic) UIColor *recordButtonColor;

- (void)initialize;
- (id)initWithCoder:(id)a0;
- (BOOL)canPlay;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)togglePlayback:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)updateTransportControls;
- (void)toggleRecording:(id)a0;
- (BOOL)isHostConnected;
- (void)appHasGoneForeground;
- (void)appHasGoneInBackground;
- (void)audioUnitPropertyChangedListener:(void *)a0 unit:(struct OpaqueAudioComponentInstance { } *)a1 propID:(unsigned int)a2 scope:(unsigned int)a3 element:(unsigned int)a4;
- (BOOL)canRecord;
- (BOOL)canRewind;
- (void)getHostCallbackInfo;
- (id)getPlayTimeString;
- (void)pollHost;
- (void)rewindAction:(id)a0;
- (void)sendStateToRemoteHost:(unsigned int)a0;
- (void)setOutputAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0;
- (void)startPollingPlayer;
- (void)stopPollingPlayer;
- (void)updateStatefromTransportCallBack;

@end
