@class NSString;

@interface MRUStringsProvider : NSObject

@property (class, readonly, nonatomic) NSString *scrubberLive;
@property (class, readonly, nonatomic) NSString *controlOtherSpeakers;
@property (class, readonly, nonatomic) NSString *controlOtherSpeakersMultipleLines;
@property (class, readonly, nonatomic) NSString *notPlaying;
@property (class, readonly, nonatomic) NSString *loading;
@property (class, readonly, nonatomic) NSString *connecting;
@property (class, readonly, nonatomic) NSString *notConnected;
@property (class, readonly, nonatomic) NSString *controlsUnavailable;
@property (class, readonly, nonatomic) NSString *composedBy;
@property (class, readonly, nonatomic) NSString *nowPlayingTitle;
@property (class, readonly, nonatomic) NSString *airplayTitle;
@property (class, readonly, nonatomic) NSString *airPlayErrorTitle;
@property (class, readonly, nonatomic) NSString *airPlayConnectionErrorMessage;
@property (class, readonly, nonatomic) NSString *ok;
@property (class, readonly, nonatomic) NSString *cancel;
@property (class, readonly, nonatomic) NSString *transportLikeTitle;
@property (class, readonly, nonatomic) NSString *transportDislikeTitle;
@property (class, readonly, nonatomic) NSString *transportBookmarkTitle;
@property (class, readonly, nonatomic) NSString *routingHeaderSpeakersAndTVsTitle;
@property (class, readonly, nonatomic) NSString *routingInUseOnPairedDevice;
@property (class, readonly, nonatomic) NSString *routingHijackConfirmTitle;
@property (class, readonly, nonatomic) NSString *routingHijackCancelTitle;
@property (class, readonly, nonatomic) NSString *routingHijackLocalTitle;
@property (class, readonly, nonatomic) NSString *routingHijackLocalMessage;
@property (class, readonly, nonatomic) NSString *routingHijackSpeakerTitle;
@property (class, readonly, nonatomic) NSString *routingHijackSpeakerMessage;
@property (class, readonly, nonatomic) NSString *routingHijackTVTitle;
@property (class, readonly, nonatomic) NSString *routingHijackTVMessage;
@property (class, readonly, nonatomic) NSString *audioShaingActionTitle;
@property (class, readonly, nonatomic) NSString *audioShaingDisabledCarPlay;
@property (class, readonly, nonatomic) NSString *audioShaingDisabledCarPlaySameOwner;
@property (class, readonly, nonatomic) NSString *audioShaingDisabledCarKit;
@property (class, readonly, nonatomic) NSString *audioShaingDisabledCarKitSameOwner;
@property (class, readonly, nonatomic) NSString *accessoryBatteryLevelSingle;
@property (class, readonly, nonatomic) NSString *accessoryBatteryLevelLeft;
@property (class, readonly, nonatomic) NSString *accessoryBatteryLevelRight;
@property (class, readonly, nonatomic) NSString *accessoryBatteryLevelCombined;
@property (class, readonly, nonatomic) NSString *accessoryBatteryLevelCase;

+ (id)localizedNameForBundleIdentifier:(id)a0;
+ (id)localizedStringWithKey:(id)a0;

@end
