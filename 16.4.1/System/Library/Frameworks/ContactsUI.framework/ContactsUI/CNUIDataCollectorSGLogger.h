@protocol CNScheduler;

@interface CNUIDataCollectorSGLogger : NSObject

@property (retain, nonatomic) id<CNScheduler> workQueue;
@property (readonly, copy, nonatomic) id /* block */ serviceProvider;

+ (id)loggerWithSGSuggestionsServiceProvider:(id /* block */)a0 schedulerProvider:(id)a1;

- (void).cxx_destruct;
- (id)initWithSuggestionsServiceProvider:(id /* block */)a0 schedulerProvider:(id)a1;
- (void)logContactCreated:(id)a0 contactIdentifier:(id)a1 bundleID:(id)a2;
- (void)logContactSearchResultSelected:(id)a0 contactIdentifier:(id)a1 bundleID:(id)a2;
- (void)logSearchResultsIncludedPureSuggestionsWithBundleID:(id)a0;
- (void)logSuggestedContactDetailShown:(id)a0 contactIdentifier:(id)a1 bundleID:(id)a2;
- (void)logSuggestedContactDetailUsed:(id)a0 contactIdentifier:(id)a1 bundleID:(id)a2;
- (void)performBlockWithService:(id /* block */)a0;

@end
