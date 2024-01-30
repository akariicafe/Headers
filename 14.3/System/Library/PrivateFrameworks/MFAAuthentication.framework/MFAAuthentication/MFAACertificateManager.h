@class NSUserDefaults, NSXPCConnection;

@interface MFAACertificateManager : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSUserDefaults *userDefaults;

+ (id)sharedManager;
+ (id)anchorCertificatesForTypes:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)requestMetadataForCertificate:(id)a0 requestedLocale:(id)a1 requestInfo:(id)a2 completionHandler:(id /* block */)a3;
- (int)validateCertificate:(id)a0 realtime:(BOOL)a1 error:(id *)a2;
- (int)_validateCertificateChain:(id)a0 realtime:(BOOL)a1 error:(id *)a2;
- (int)_validateCertificateWithServer:(id)a0 issuerSeq:(id)a1 ppid:(id)a2 error:(id *)a3;
- (int)_getCachedCertStatus:(id)a0 issuerSeq:(id)a1 ppid:(id)a2;
- (void)validateCertificate:(id)a0 realtime:(BOOL)a1 completionHandler:(id /* block */)a2;
- (int)validateCertificateChain:(id)a0 realtime:(BOOL)a1 error:(id *)a2;

@end
