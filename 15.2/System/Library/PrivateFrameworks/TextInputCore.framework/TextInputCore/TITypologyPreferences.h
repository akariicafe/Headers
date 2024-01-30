@class NSURL;
@protocol TITypologyProfileOptInManaging;

@interface TITypologyPreferences : NSObject <TITypologyPreferences>

@property (weak, nonatomic) id<TITypologyProfileOptInManaging> typologyProfileOptInManager;
@property (readonly, nonatomic) BOOL typologyLoggingEnabled;
@property (readonly, nonatomic) BOOL typologyLoggingEnabledByProfile;
@property (readonly, nonatomic) NSURL *typologyDirectoryURL;
@property (readonly, nonatomic) BOOL isTypologyInDatavault;
@property (readonly, nonatomic) unsigned long long persistenceStrategy;
@property (readonly, nonatomic) long long maxBytesPersistedTypologyRecords;
@property (readonly, nonatomic) long long maxBytesPersistedTypologyTraceLogs;
@property (readonly, nonatomic) double maxLifetimeInterval;

- (void).cxx_destruct;
- (BOOL)_typologyLoggingEnabledByInternalPreference;
- (BOOL)_typologyLoggingEnabledByProfile;

@end
