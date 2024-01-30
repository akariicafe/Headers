@class NSString, NSURL, DATaskManager;

@interface DADClientSubscribedCalendarDownloadDelegate : DADClientDelegate <SubCalValidationTaskDelegate, SubCalDATaskPasswordDelegate> {
    NSURL *_subscribedCalendarURL;
    DATaskManager *_taskManager;
    id /* block */ _passwordContinuation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWithError:(id)a0;
- (unsigned int)evaluateTrust:(struct __SecTrust { } *)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)handleTrustChallenge:(id)a0 forTask:(id)a1;
- (void)handleTrustChallenge:(id)a0 forTask:(id)a1 completionHandler:(id /* block */)a2;
- (void)subCalTask:(id)a0 needsUsernameAndPasswordForHost:(id)a1 continuation:(id /* block */)a2;
- (void)subCalValidationTask:(id)a0 downloadProgressedTo:(long long)a1 outOf:(long long)a2;
- (void)subCalValidationTask:(id)a0 finishedWithError:(id)a1 calendarName:(id)a2 document:(id)a3 calendarData:(id)a4;
- (void)beginDownload;
- (void)createAndSubmitValidationTask;
- (void)finishWithError:(id)a0 summary:(id)a1;
- (id)initWithURL:(id)a0 client:(id)a1;
- (BOOL)shouldTrustChallenge:(id)a0;
- (void)tryUsername:(id)a0 password:(id)a1;

@end
