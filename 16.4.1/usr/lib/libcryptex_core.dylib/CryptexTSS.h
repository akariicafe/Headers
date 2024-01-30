@class NSString, NSDictionary, NSData, NSObject;
@protocol OS_os_log, OS_xpc_object, OS_dispatch_queue, OS_cryptex_signature;

@interface CryptexTSS : NSObject

@property (nonatomic) unsigned long long flags;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) int err;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dq;
@property (retain, nonatomic) NSString *tssUsage;
@property (retain, nonatomic) NSString *tssURL;
@property (retain, nonatomic) NSObject<OS_xpc_object> *tss_request;
@property (retain, nonatomic) NSDictionary *response;
@property (retain, nonatomic) NSObject<OS_cryptex_signature> *tssp_sign;
@property (retain, nonatomic) NSObject<OS_xpc_object> *im4m_array;
@property (retain, nonatomic) NSData *c411_content;

- (void)setURL:(id)a0;
- (void)activate;
- (id)initWithFlags:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)tssStampRequest;
- (id)generateDiavloRequest:(id)a0;
- (id)generatePackedSignatures;
- (BOOL)isSSOAvailable;
- (void)setInfoData:(id)a0;
- (void)setManifestArray:(id)a0;
- (int)tssSendRequest;
- (id)tssSerializeRequest;
- (void)tssSubmit;

@end
