@class UIFont;

@interface AVMobileChromelessControlsStyleSheet : AVMobileControlsStyleSheet {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _landscapeFullscreenInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _portraitFullscreenInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _embeddedInlineInsets;
    double _standardPaddingFullScreen;
    double _standardPaddingInline;
    UIFont *_timeLabelFont;
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    UIFont *_infoAffordanceButtonFont;
    UIFont *_contentTagFont;
    UIFont *_prominentContentTagFont;
    UIFont *_secondaryPlaybackControlsFont;
    UIFont *_playPauseButtonFont;
}

@property (readonly, nonatomic) UIFont *timeLabelFont;
@property (readonly, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) UIFont *subtitleFont;
@property (readonly, nonatomic) UIFont *infoAffordanceButtonFont;
@property (readonly, nonatomic) UIFont *prominentContentTagFont;
@property (readonly, nonatomic) UIFont *contentTagFont;
@property (readonly, nonatomic) UIFont *playPauseButtonFont;
@property (readonly, nonatomic) UIFont *secondaryPlaybackControlsFont;

- (id)initWithTraitCollection:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })embeddedInlineInsets;
- (double)standardPaddingFullScreen;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })landscapeFullscreenInsets;
- (double)standardPaddingInline;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })portraitFullscreenInsets;

@end
