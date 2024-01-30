@interface ICFPLeaseSyncSession : NSObject {
    struct FPLeaseSyncOpaque_ { } *_fpLeaseSync;
    struct FairPlayHWInfo_ { unsigned int IDLength; unsigned char ID[20]; } _hardwareInfo;
}

@property (readonly, nonatomic) unsigned long long accountID;
@property (readonly, nonatomic) id leaseID;
@property (readonly, nonatomic) unsigned int mediaKind;

+ (id)leaseSyncSessionWithID:(id)a0 accountID:(unsigned long long)a1 mediaKind:(unsigned int)a2 returningLeaseSyncRequestData:(id *)a3 error:(id *)a4;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_initWithFPLeaseSync:(struct FPLeaseSyncOpaque_ { } *)a0 leaseID:(id)a1 accountID:(unsigned long long)a2 hardwareInfo:(struct FairPlayHWInfo_ { unsigned int x0; unsigned char x1[20]; })a3 mediaKind:(unsigned int)a4;
- (BOOL)endLeaseSyncAndReturnError:(id *)a0;
- (BOOL)getLeaseSyncRenewRequestData:(id *)a0 error:(id *)a1;
- (BOOL)importLeaseSyncResponseData:(id)a0 error:(id *)a1;
- (BOOL)processRenewResponseData:(id)a0 error:(id *)a1;

@end
