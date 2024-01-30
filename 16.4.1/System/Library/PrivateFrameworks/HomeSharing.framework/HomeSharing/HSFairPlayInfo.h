@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HSFairPlayInfo : NSObject {
    NSObject<OS_dispatch_queue> *_sapQueue;
    void *_hwInfo;
    void *_session;
}

@property (readonly, nonatomic) NSString *deviceGUID;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)securityInfoForURL:(id)a0;
- (id)beginNegotiationWithSAPVersion:(unsigned int)a0;
- (BOOL)_getHardwareInfo:(struct FairPlayHWInfo_ { unsigned int x0; unsigned char x1[20]; } *)a0;
- (id)_hexStringForData:(id)a0;
- (id)continueNegotationWithSAPVersion:(unsigned int)a0 data:(id)a1 isComplete:(BOOL *)a2;
- (void)endSecuritySession;

@end
