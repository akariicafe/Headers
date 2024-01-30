@class ACAccountStore, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CalendarAccountsController : NSObject {
    NSMutableDictionary *_lastStoreListingRefreshDates;
    NSObject<OS_dispatch_queue> *_refreshQueue;
    ACAccountStore *_accountStore;
}

+ (id)sharedInstance;
+ (void)initialize;
+ (void)invalidate;

- (id)accountStore;
- (id)_displayAccountForAccountWithIdentifier:(id)a0;
- (void)_accountStoreDidChange:(id)a0;
- (BOOL)sourceIsManaged:(id)a0;
- (int)sortOrderForSourceType:(long long)a0;
- (id)accountTypeTitleForSource:(id)a0;
- (id)_accountForAccountIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_localeDidChange:(id)a0;
- (id)init;
- (int)sortOrderForSource:(id)a0;
- (int)sortOrderForStoreType:(long long)a0;
- (void)dealloc;
- (id)titleForSource:(id)a0 forBeginningOfSentence:(BOOL)a1;
- (id)accountTypeTitleForSourceWithExternalId:(id)a0;

@end
