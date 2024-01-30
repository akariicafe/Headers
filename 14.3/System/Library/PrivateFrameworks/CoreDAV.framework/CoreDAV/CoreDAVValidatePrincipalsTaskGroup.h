@class NSSet, NSString, NSURL, NSMutableSet;

@interface CoreDAVValidatePrincipalsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate>

@property (retain, nonatomic) NSMutableSet *urlsToExamine;
@property (retain, nonatomic) NSMutableSet *principalURLs;
@property (retain, nonatomic) NSURL *urlBeingExamined;
@property (readonly, nonatomic) NSSet *resultPrincipalURLs;
@property (readonly, nonatomic) BOOL didReceiveAuthenticationError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_finishWithError:(id)a0;
- (void)cancelTaskGroup;
- (void)startTaskGroup;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void)_fetchNextURL;
- (id)initWithAccountInfoProvider:(id)a0 urls:(id)a1 taskManager:(id)a2;

@end
