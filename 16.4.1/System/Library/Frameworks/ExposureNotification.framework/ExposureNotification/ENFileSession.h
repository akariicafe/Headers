@class ENXPCServiceClient, NSArray, NSDictionary, NSData, NSDate;

@interface ENFileSession : NSObject {
    BOOL _activateCalled;
    BOOL _activateSucceeded;
    BOOL _invalidated;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) unsigned long long invalidKeyCount;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSData *sha256Data;
@property (readonly, copy, nonatomic) NSArray *signatures;
@property (readonly, nonatomic) ENXPCServiceClient *serviceClient;

- (void)dealloc;
- (id)initWithServiceClient:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)activateWithArchivePath:(id)a0 error:(id *)a1;
- (BOOL)activateWithFD:(int)a0 signatureData:(id)a1 error:(id *)a2;
- (id)readTEKBatchAndReturnError:(id *)a0;
- (id)verifySignatureWithPublicKey:(struct __SecKey { } *)a0 error:(id *)a1;
- (BOOL)_activateSyncWithRequest:(id)a0 error:(id *)a1;
- (id)_readTEKBatchHandleReply:(id)a0 error:(id *)a1;
- (id)_activateCreateXPCRequestWithFD:(int)a0 archive:(BOOL)a1 signatureData:(id)a2 error:(id *)a3;
- (id)_activateCreateXPCRequestWithPath:(id)a0 archive:(BOOL)a1 signatureData:(id)a2 error:(id *)a3;
- (BOOL)_activateHandleReply:(id)a0 error:(id *)a1;
- (BOOL)activateWithFilePath:(id)a0 error:(id *)a1;

@end
