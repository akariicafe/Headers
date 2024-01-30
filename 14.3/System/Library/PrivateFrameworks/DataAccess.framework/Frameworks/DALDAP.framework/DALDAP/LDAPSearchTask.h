@class DAContactsSearchQuery, NSMutableArray, NSObject;
@protocol OS_ldap_operation;

@interface LDAPSearchTask : LDAPTask

@property (retain, nonatomic) NSMutableArray *foundContacts;
@property (retain, nonatomic) NSObject<OS_ldap_operation> *operation;
@property (readonly, nonatomic) DAContactsSearchQuery *query;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)_performQuery;
- (void)disable;
- (int)numDownloadedElements;
- (id)initWithQuery:(id)a0;
- (void)performTask;
- (void)_failImmediately;
- (id)daLevelErrorForLDAPError:(int)a0;
- (id)_searchStringForWord:(id)a0;
- (void)_appendKey:(id)a0 value:(id)a1 toSearchResultElement:(id)a2;
- (id)_copySearchStringForQueryInput:(id)a0;
- (void)_promptForPasswordDueToError:(id)a0;

@end
