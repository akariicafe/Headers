@class NSString, NSMutableDictionary, NSURLSession;

@interface CRKInternetDateProvider : NSObject <NSURLSessionDataDelegate, CRKInternetDateFetching>

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSMutableDictionary *completionHandlerTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)fetchInternetDateWithCompletion:(id /* block */)a0;
- (void)storeCompletionHandler:(id /* block */)a0 forTask:(id)a1;
- (void)callAndRemoveCompletionHandlerWithDate:(id)a0 error:(id)a1 task:(id)a2;
- (void)internetDateRequestDidReceiveTask:(id)a0;

@end
