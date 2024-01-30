@class NSArray, NSString, NSError, NSObject;
@protocol OS_os_log;

@interface ECSecureMIMETrustEvaluation : NSObject <EFLoggable>

@property (class, copy, nonatomic) NSArray *anchorCertificatesForTesting;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) struct __SecTrust { } *trust;
@property (readonly, copy, nonatomic) NSString *signerEmailAddress;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned int trustResult;
@property (readonly, nonatomic) BOOL requiresReevaluationWithNetworkAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)evaluateTrust:(struct __SecTrust { } *)a0 withOptions:(unsigned long long)a1 signerEmailAddress:(id)a2;
+ (id)reevaluateWithNetworkAccessAllowed:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_initWithTrust:(struct __SecTrust { } *)a0 options:(unsigned long long)a1 signerEmailAddress:(id)a2;
- (void)_evaluate;

@end
