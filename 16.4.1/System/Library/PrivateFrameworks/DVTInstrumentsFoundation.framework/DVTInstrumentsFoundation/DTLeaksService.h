@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface DTLeaksService : DTXService <DTLeaksServiceLegacyRPC, DTLeaksServiceAuthorizedRPC> {
    NSObject<OS_dispatch_queue> *_coordinationQueue;
    NSObject<OS_dispatch_queue> *_preservationQueue;
    NSMutableDictionary *_helperConnectionByTargetPid;
    NSMutableDictionary *_helperPidByTargetPid;
    NSMutableDictionary *_fileByPid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCapabilities:(id)a0;

- (void)cancelAllRequests;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)initWithChannel:(id)a0;
- (void)_internalRequestForPid:(int)a0 message:(id)a1 completion:(id /* block */)a2;
- (void)_lookupGraphByToken:(unsigned long long)a0 response:(id)a1;
- (id)_preserveDict:(id)a0 forPid:(int)a1;
- (id)requestGraph:(unsigned long long)a0 options:(id)a1;
- (id)requestMallocStackLog:(int)a0 forAddress:(unsigned long long *)a1 size:(unsigned long long)a2 isLiteZone:(unsigned int)a3;
- (id)requestVMregionStackLog:(int)a0 forAddress:(unsigned long long *)a1 size:(unsigned long long)a2;
- (int)setMallocStackLoggingMode:(int)a0 forPid:(int)a1;

@end
