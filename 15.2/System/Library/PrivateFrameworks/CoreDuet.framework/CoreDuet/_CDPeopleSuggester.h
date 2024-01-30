@class _CDCachedPeopleSuggestion, _CDPeopleSuggesterContext, _CDInteractionStoreNotificationReceiver, _CDPeopleSuggesterSettings, NSObject;
@protocol _CDInteractionAdvising, OS_dispatch_queue;

@interface _CDPeopleSuggester : NSObject {
    id<_CDInteractionAdvising> _advisor;
    NSObject<OS_dispatch_queue> *_queue;
    _CDCachedPeopleSuggestion *_cache;
    _CDInteractionStoreNotificationReceiver *_receiver;
    int _settingsNotifyToken;
}

@property BOOL enableCaching;
@property double cacheTimeoutSeconds;
@property (retain) _CDPeopleSuggesterContext *context;
@property (retain) _CDPeopleSuggesterSettings *settings;

+ (id)peopleSuggesterWithDirectDBAccess;
+ (id)createAdvisorSettingsFromContext:(id)a0 settings:(id)a1;
+ (id)restrictedPrefixForPrefix:(id)a0;
+ (id)peopleSuggester;
+ (id)peopleSuggesterUsingDaemon;
+ (id)loggingTagForAutocompleteFeedback;

- (void)updateSettings;
- (id)initWithAdvisor:(id)a0;
- (id)suggestPeopleWithError:(id *)a0;
- (void)suggestPeopleWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidateCache;

@end
