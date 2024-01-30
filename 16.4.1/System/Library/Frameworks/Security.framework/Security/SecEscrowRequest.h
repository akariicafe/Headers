@class NSString, NSXPCConnection;

@interface SecEscrowRequest : NSObject <SecEscrowRequestable>

@property (retain) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)request:(id *)a0;

- (BOOL)resetAllRequests:(id *)a0;
- (id)fetchRequestWaitingOnPasscode:(id *)a0;
- (BOOL)escrowCompletedWithinLastSeconds:(double)a0;
- (BOOL)pendingEscrowUpload:(id *)a0;
- (BOOL)triggerEscrowUpdate:(id)a0 error:(id *)a1;
- (void)dealloc;
- (BOOL)triggerEscrowUpdate:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithConnection:(id)a0;
- (id)fetchPrerecord:(id)a0 error:(id *)a1;
- (BOOL)cachePrerecord:(id)a0 serializedPrerecord:(id)a1 error:(id *)a2;
- (unsigned long long)storePrerecordsInEscrow:(id *)a0;
- (void).cxx_destruct;
- (id)fetchStatuses:(id *)a0;

@end
