@class NSMutableArray, NSString, SSAuthorizationRequest, NSURL, MPHomeSharingML3DataProvider, NSData, NSError;

@interface MPHomeSharingErrorResolver : MPAVErrorResolver <SSAuthorizationRequestDelegate> {
    NSURL *_keybagURL;
    unsigned long long _accountID;
    NSData *_accountTokenData;
    unsigned long long _downloaderAccountID;
    NSData *_downloaderAccountTokenData;
    unsigned long long _familyAccountID;
    NSError *_error;
    NSMutableArray *_requests;
    SSAuthorizationRequest *_activeRequest;
    BOOL _atLeastOneAuthorizationRequestSuccessful;
}

@property (retain, nonatomic) MPHomeSharingML3DataProvider *dataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)request:(id)a0 didFailWithError:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)requestDidFinish:(id)a0;
- (BOOL)_errorIsFairPlayError:(id)a0;
- (void)_performMachineAuthorization;
- (void)_processNextAuthorizationRequest;
- (void)authorizationRequest:(id)a0 didReceiveResponse:(id)a1;
- (id)initWithKeybagURL:(id)a0 accountID:(unsigned long long)a1 accountTokenData:(id)a2;
- (id)initWithKeybagURL:(id)a0 accountID:(unsigned long long)a1 accountTokenData:(id)a2 downloaderAccountID:(unsigned long long)a3 downloaderAccountTokenData:(id)a4 familyAccountID:(unsigned long long)a5;
- (void)resolveError:(id)a0;

@end
