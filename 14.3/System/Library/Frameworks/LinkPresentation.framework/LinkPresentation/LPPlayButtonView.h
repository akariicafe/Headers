@class LPPlayButtonControl, LPMusicPlayButtonStyle, LPInlineMediaPlaybackInformation;

@interface LPPlayButtonView : LPComponentView <LPContentInsettable> {
    LPPlayButtonControl *_button;
    LPInlineMediaPlaybackInformation *_playbackInformation;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    LPMusicPlayButtonStyle *_style;
}

- (void)updateButtonForAudioBook;
- (void)updateButtonForAudioFile;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)layoutComponentView;
- (void)updateButton;
- (id)initWithPlaybackInformation:(id)a0 style:(id)a1;
- (void)installiTunesButton;
- (void)installDisablediTunesButton;
- (void)installPlaceholderButton;
- (void)installPreviewButton;
- (void)installAudioButton;
- (void)updateButtonForSongOrAlbum;
- (void)updateButtonForPodcast;
- (void)updateButtonForRadio;

@end
