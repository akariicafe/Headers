@interface IMMeCardSharingStateController : NSObject

@property (nonatomic) BOOL sharingEnabled;
@property (nonatomic) unsigned long long sharingAudience;
@property (nonatomic) unsigned long long nameFormat;
@property (nonatomic) BOOL nameForkedFromMeCard;
@property (nonatomic) BOOL imageForkedFromMeCard;

+ (id)sharedInstance;

- (id)init;
- (BOOL)wasSharingEverEnabled;
- (void)_incrementSharingVersion;
- (void)_migrateMeCardDomains;
- (void)_syncPreferenceDidChange;
- (void)postNameFormatChangedNotification;

@end
