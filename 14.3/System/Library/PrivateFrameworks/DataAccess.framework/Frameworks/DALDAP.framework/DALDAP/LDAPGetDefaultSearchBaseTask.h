@class NSString;

@interface LDAPGetDefaultSearchBaseTask : LDAPTask

@property (retain, nonatomic) NSString *defaultNamingContext;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)_performQuery;
- (int)numDownloadedElements;
- (void)performTask;
- (id)daLevelErrorForLDAPError:(int)a0;

@end
