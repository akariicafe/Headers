@class LPPlayButtonControl, LPAudioPlayButtonStyle, LPInlineMediaPlaybackInformation;

@interface LPPlayButtonView : LPComponentView <LPContentInsettable, LPComponentMediaPlayable> {
    LPPlayButtonControl *_button;
    LPInlineMediaPlaybackInformation *_playbackInformation;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    LPAudioPlayButtonStyle *_style;
    BOOL _hasBuilt;
}

- (id)theme;
- (id)playable;
- (void).cxx_destruct;
- (void)updateButton;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithHost:(id)a0;
- (void)dealloc;
- (void)layoutComponentView;
- (void)buildSubviewsIfNeeded;
- (BOOL)isLyricStyle;
- (void)installPlaceholderButton;
- (void)installiTunesButton;
- (void)installDisablediTunesButton;
- (void)installPreviewButton;
- (void)installAudioButton;
- (void)updateButtonForSongOrAlbum;
- (void)updateButtonForPodcast;
- (void)updateButtonForRadio;
- (void)updateButtonForAudioBook;
- (void)updateButtonForAudioFile;
- (id)initWithHost:(id)a0 playbackInformation:(id)a1 style:(id)a2;

@end
