@class _PASLock, PPQuickTypeNavigationServant, PPQuickTypeConnectionsServant, PPQuickTypeEventsServant, PPQuickTypeURLServant, PPQuickTypeContactsServant;

@interface PPLocalQuickTypeBroker : NSObject <PPFeedbackAccepting, PPFeedbackProcessing> {
    PPQuickTypeNavigationServant *_navigationServant;
    PPQuickTypeContactsServant *_contactsServant;
    PPQuickTypeEventsServant *_eventsServant;
    PPQuickTypeConnectionsServant *_connectionsServant;
    PPQuickTypeURLServant *_urlServant;
    _PASLock *_cacheLock;
}

+ (id)sharedInstance;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (void)warmUpWithCompletion:(id /* block */)a0;
- (void)recentQuickTypeItemsForRecipients:(id)a0 completion:(id /* block */)a1;
- (void)processFeedback:(id)a0;
- (void)hibernateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)quickTypeItemsWithQuery:(id)a0 limit:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)init;
- (void)quickTypeItemsWithLanguageModelingTokens:(id)a0 localeIdentifier:(id)a1 recipients:(id)a2 bundleIdentifier:(id)a3 limit:(unsigned long long)a4 completion:(id /* block */)a5;
- (id)filterFeedback:(id)a0;

@end
