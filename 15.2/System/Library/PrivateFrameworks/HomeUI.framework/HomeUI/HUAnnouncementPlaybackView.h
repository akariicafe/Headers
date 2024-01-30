@class CNAvatarView, NSURL, UIImageView, NSDictionary, HFAudioPlayer, NSMutableArray, NSLayoutConstraint, HUIconView;

@interface HUAnnouncementPlaybackView : UIView

@property (retain, nonatomic) CNAvatarView *avatarView;
@property (retain, nonatomic) UIImageView *genericAvatarView;
@property (retain, nonatomic) HUIconView *iconView;
@property (nonatomic) double playbackFractionComplete;
@property (retain, nonatomic) NSURL *announcementURL;
@property (nonatomic) int productType;
@property (retain, nonatomic) HFAudioPlayer *audioPlayer;
@property (retain, nonatomic) NSMutableArray *audioWaveLayers;
@property (nonatomic) unsigned long long currentWaveLayerIndex;
@property (nonatomic) BOOL isSiriEndpointAccessory;
@property (retain, nonatomic) NSDictionary *announcementInfo;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *centerXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *centerYConstraint;
@property (nonatomic) BOOL fullyPlayed;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)_requiredKeyDescriptors;
- (void)didUpdateAveragePower:(double)a0;
- (id)_imageOrViewForServiceType:(id)a0;
- (void)_updateIconViewForServiceType:(id)a0;
- (BOOL)_isProductTypeHomePod;
- (void)_configureAnnounceSender:(id)a0;
- (void)_setupAudioWaveLayers;
- (void)_generateRippleForAveragePower:(double)a0;
- (void)playbackStopped;
- (void)_animateLayerWaveAtIndex:(unsigned long long)a0 forAveragePower:(double)a1;
- (void)pausePlaybackAnimation;
- (void)resumePlaybackAnimation;

@end
