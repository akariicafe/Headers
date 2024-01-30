@interface IMMeCardSharingStateController : NSObject

@property (nonatomic) BOOL sharingEnabled;
@property (nonatomic) unsigned long long sharingAudience;
@property (nonatomic) unsigned long long nameFormat;
@property (nonatomic) BOOL nameForkedFromMeCard;
@property (nonatomic) BOOL imageForkedFromMeCard;

+ (id)sharedInstance;

- (id)init;
- (void)_migrateMeCardDomains;
- (void)_syncPreferenceDidChange;
- (void)_incrementSharingVersion;
- (void)postNameFormatChangedNotification;
- (BOOL)wasSharingEverEnabled;

@end
