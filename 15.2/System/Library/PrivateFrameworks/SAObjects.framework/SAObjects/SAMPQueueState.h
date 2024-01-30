@class NSNumber, NSString, NSDictionary, SANPCommandInfo, SAMPMediaItem, SAMPNowPlayingQueuePosition, SANPVideoAudioAndSubtitleLanguageOptions;

@interface SAMPQueueState : AceObject <SABackgroundContextObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) SANPVideoAudioAndSubtitleLanguageOptions *audioAndSubtitleLanguageOptions;
@property (nonatomic) BOOL currentItemSteerable;
@property (copy, nonatomic) NSDictionary *currentListeningToContainer;
@property (retain, nonatomic) SAMPMediaItem *listeningToItem;
@property (retain, nonatomic) SAMPMediaItem *nextListeningToItem;
@property (retain, nonatomic) SANPCommandInfo *nowPlayingCommandInfo;
@property (retain, nonatomic) SAMPNowPlayingQueuePosition *playbackQueuePosition;
@property (copy, nonatomic) NSNumber *playbackRate;
@property (retain, nonatomic) SAMPMediaItem *previousListenedToItem;
@property (copy, nonatomic) NSNumber *shuffleEnabled;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) int state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queueState;
+ (id)queueStateWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
