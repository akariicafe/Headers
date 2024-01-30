@class NSString;

@interface CLFPhoneFaceTimeSettings : CLFBaseSettings

@property (class, readonly, nonatomic) CLFPhoneFaceTimeSettings *sharedInstance;

@property (nonatomic) BOOL dialerKeypadEnabled;
@property (nonatomic) BOOL inCallKeypadEnabled;
@property (retain, nonatomic) NSString *incomingCommunicationLimit;
@property (nonatomic) BOOL recentsEnabled;
@property (nonatomic) BOOL speakerOptionEnabled;

+ (id)domainName;
+ (id)allPreferenceSelectorsAsStrings;

- (id)init;

@end
