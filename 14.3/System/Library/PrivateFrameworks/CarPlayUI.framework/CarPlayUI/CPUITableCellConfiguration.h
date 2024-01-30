@class NSString, CPUITableCellAccessory, UIImage;

@interface CPUITableCellConfiguration : NSObject <CPUITableCellConfigurationProtocol>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) CPUITableCellAccessory *accessory;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL showExplicit;
@property (nonatomic) double playbackProgress;
@property (nonatomic) BOOL shouldShowPlaybackProgress;
@property (nonatomic) BOOL currentlyPlaying;
@property (nonatomic) BOOL showActivityIndicator;
@property (nonatomic) BOOL playingIndicatorLeadingSide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationWithText:(id)a0 detailText:(id)a1 image:(id)a2 showExplicit:(BOOL)a3 accessory:(id)a4 showActivityIndicator:(BOOL)a5 showPlaybackProgress:(BOOL)a6 playbackProgress:(double)a7 currentlyPlaying:(BOOL)a8 playingIndicatorLeadingSide:(BOOL)a9;
+ (id)configurationWithText:(id)a0 detailText:(id)a1 image:(id)a2 showExplicit:(BOOL)a3 accessory:(id)a4 showActivityIndicator:(BOOL)a5 showPlaybackProgress:(BOOL)a6 playbackProgress:(double)a7 currentlyPlaying:(BOOL)a8;

- (void).cxx_destruct;

@end
