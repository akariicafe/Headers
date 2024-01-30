@class NSObject, FLFollowUpController;
@protocol OS_dispatch_queue;

@interface AMSFollowUp : NSObject

@property (retain, nonatomic) FLFollowUpController *followUpController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *followUpQueue;

- (id)postFollowUpItem:(id)a0;
- (id)pendingFollowUps;
- (id)clearFollowUpItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)clearFollowUpWithBackingIdentifier:(id)a0;
- (id)_pendingFollowUpWithBackingIdentifier:(id)a0 error:(id *)a1;
- (id)clearFollowUpWithIdentifier:(id)a0 account:(id)a1;
- (id)pendingFollowUpsForAccount:(id)a0;
- (id)pendingFollowUpWithIdentifier:(id)a0 account:(id)a1;

@end
