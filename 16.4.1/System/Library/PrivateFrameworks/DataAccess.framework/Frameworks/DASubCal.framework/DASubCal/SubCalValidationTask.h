@class NSString, ICSDocument, NSData, NSURL, SubCalURLRequest;
@protocol SubCalValidationTaskDelegate;

@interface SubCalValidationTask : SubCalDATask <SubCalURLRequestDelegate>

@property (retain, nonatomic) SubCalURLRequest *request;
@property (retain, nonatomic) NSData *icsData;
@property (retain, nonatomic) ICSDocument *icsDocument;
@property (retain, nonatomic) NSString *calendarName;
@property (nonatomic) BOOL foundBeginVCal;
@property (nonatomic) BOOL foundCalName;
@property (nonatomic) unsigned long long searchIndex;
@property (weak, nonatomic) id<SubCalValidationTaskDelegate> delegate;
@property (retain, nonatomic) NSURL *subscriptionURL;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) BOOL performQuickValidation;
@property (nonatomic) BOOL useShortTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performTask;
- (void)didFinish;
- (BOOL)_isInvalidVCalBeginningForData:(id)a0;
- (void)_tryQuickValidationCurrentData:(id)a0;
- (id)_searchForCalNameInConnectionData:(id)a0;
- (id)_stringBeforeNewline:(const char *)a0 length:(unsigned long long)a1;
- (void)handleTrustChallenge:(id)a0 forSubCalURLRequest:(id)a1;
- (void)handleTrustChallenge:(id)a0 forSubCalURLRequest:(id)a1 completionHandler:(id /* block */)a2;
- (void)performDelegateCallbackWithError:(id)a0;
- (void)subCalURLRequest:(id)a0 didRedirectToURL:(id)a1;
- (void)subCalURLRequest:(id)a0 finishedWithData:(id)a1 error:(id)a2;
- (void)subCalURLRequest:(id)a0 updatedData:(id)a1;
- (void)subCalURLRequestNeedsUsernameAndPasswordForHost:(id)a0 continuation:(id /* block */)a1;
- (void)willFinish;

@end
