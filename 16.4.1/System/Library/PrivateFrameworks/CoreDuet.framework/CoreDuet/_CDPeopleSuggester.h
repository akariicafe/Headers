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

+ (id)peopleSuggester;
+ (id)createAdvisorSettingsFromContext:(id)a0 settings:(id)a1;
+ (id)loggingTagForAutocompleteFeedback;
+ (id)peopleSuggesterUsingDaemon;
+ (id)peopleSuggesterWithDirectDBAccess;
+ (id)restrictedPrefixForPrefix:(id)a0;

- (void)invalidateCache;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAdvisor:(id)a0;
- (void)suggestPeopleWithCompletionHandler:(id /* block */)a0;
- (id)suggestPeopleWithError:(id *)a0;
- (void)updateSettings;

@end
