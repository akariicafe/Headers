@class SBKSyncTransaction, NSString;

@interface SBKLoadDomainVersionRequestHandler : SBKSyncRequestHandler <SBKSyncTransactionProcessing>

@property unsigned long long itemCount;
@property (retain) SBKSyncTransaction *transaction;
@property BOOL loadsRemoteItemCount;
@property (readonly) unsigned long long responseItemCount;
@property (copy) NSString *responseDomainVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)conflictDetectionType;

- (void).cxx_destruct;
- (void)runWithCompletionHandler:(id /* block */)a0;

@end
