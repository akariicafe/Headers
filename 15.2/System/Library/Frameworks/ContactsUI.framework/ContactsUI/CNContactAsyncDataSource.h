@class NSString, NSArray, CNContactStoreFilter, CNContactFilter, NSDictionary, CNContactStore, NSMutableArray, CNContactDataSourceSafeDelegate, CNPublishingSubject, CNContactFormatter;
@protocol CNSchedulerProvider, CNContactDataSourceDelegate, CNCancelable;

@interface CNContactAsyncDataSource : NSObject <CNContactDataSource> {
    CNContactDataSourceSafeDelegate *_delegate;
}

@property (retain, nonatomic) CNContactStore *store;
@property (retain, nonatomic) id<CNCancelable> searchCancelationToken;
@property (retain, nonatomic) id<CNSchedulerProvider> reloadSchedulerProvider;
@property (retain, nonatomic) CNPublishingSubject *reloadStream;
@property (retain, nonatomic) NSMutableArray *resultingContacts;
@property (copy, nonatomic) CNContactStoreFilter *filter;
@property (retain, nonatomic) NSArray *allKeysToFetchForTransientContacts;
@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) NSDictionary *contactMatchInfos;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSArray *indexSections;
@property (weak, nonatomic) id<CNContactDataSourceDelegate> delegate;
@property (readonly, nonatomic) BOOL canReload;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) CNContactFilter *effectiveFilter;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (readonly, nonatomic) BOOL shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reload;
- (id)initWithStore:(id)a0;
- (void)setNetworkActivityIndicatorVisible:(BOOL)a0;
- (id)completeContactFromContact:(id)a0 fromMainStoreOnly:(BOOL)a1 keysToFetch:(id)a2;
- (id)preferredForNameMeContactIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invalidate;
- (id)indexPathForContact:(id)a0;
- (void)dealloc;
- (void)invalidateSearch;
- (void)reloadWithRequest:(id)a0;
- (void)invalidateResults;

@end
