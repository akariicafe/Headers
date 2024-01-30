@class SSURLBag, NSString, SSBag, NSData, SSVURLBagInterpreter, NSObject, SSVFairPlaySAPContext;
@protocol OS_dispatch_queue;

@interface SSVFairPlaySAPSession : NSObject <SSVSAPContext> {
    SSBag *_bag;
    NSObject<OS_dispatch_queue> *_completionBlockQueue;
    NSData *_certificateData;
    SSVFairPlaySAPContext *_context;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSURLBag *_urlBag;
}

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) SSVURLBagInterpreter *urlBagInterpreter;
@property (nonatomic) BOOL useSharedBagInterpreter;
@property (readonly, nonatomic) BOOL primed;
@property (copy) NSData *certificateData;
@property (readonly) long long SAPVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_initWithURLBagInterpreter:(id)a0 SAPVersion:(long long)a1;
- (BOOL)_verifyPrimeResponse:(id)a0;
- (void)establishSessionWithCompletionBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_shouldRetrySAPOperationForError:(id)a0;
- (id)_postExchangeData:(id)a0;
- (BOOL)_verifySignature:(id)a0 forData:(id)a1 error:(id *)a2;
- (void)primeSessionWithCompletionBlock:(id /* block */)a0;
- (id)initWithURLBagDictionary:(id)a0;
- (id)initWithSAPVersion:(long long)a0;
- (id)_urlBagInterpreter;
- (void)verifySignature:(id)a0 forData:(id)a1 completionBlock:(id /* block */)a2;
- (BOOL)_primeTheConnection;
- (id)_signData:(id)a0 error:(id *)a1;
- (id)initWithURLBagDictionary:(id)a0 SAPVersion:(long long)a1;
- (id)initWithURLBag:(id)a0;
- (id)signatureWithData:(id)a0 error:(id *)a1;
- (id)initWithURLBag:(id)a0 SAPVersion:(long long)a1;
- (BOOL)verifyData:(id)a0 withSignature:(id)a1 error:(id *)a2;
- (id)_establishContext;
- (id)_loadCertificateData;
- (id)initWithSSBag:(id)a0 SAPVersion:(long long)a1;
- (id)_initSSVFairPlaySAPSession;
- (void)signData:(id)a0 completionBlock:(id /* block */)a1;

@end
