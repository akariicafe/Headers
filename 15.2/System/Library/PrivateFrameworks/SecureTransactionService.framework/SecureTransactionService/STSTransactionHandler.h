@class STSSession, NSData, STSCredential;
@protocol STSSessionDelegate;

@interface STSTransactionHandler : NSObject

@property (retain, nonatomic) STSCredential *activeSTSCredential;
@property (readonly, nonatomic) unsigned char supportedCredentialType;
@property (readonly, weak, nonatomic) id<STSSessionDelegate> delegate;
@property (readonly, weak, nonatomic) STSSession *parent;
@property (readonly, nonatomic) NSData *handoffToken;

- (void)_tearDown;
- (id)initWithParent:(id)a0;
- (void).cxx_destruct;
- (id)activate;
- (id)setActiveCredential:(id)a0;
- (id)startTransactionWithAuthorization:(id)a0 options:(unsigned long long)a1;
- (id)stopTransaction;
- (void)tearDownWithCompletion:(id /* block */)a0;
- (id)activateWithDelegate:(id)a0 handoffToken:(id)a1;
- (id)activateWithDelegate:(id)a0;

@end
