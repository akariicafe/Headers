@class NSObject, FLFollowUpController;
@protocol OS_dispatch_queue;

@interface AMSFollowUp : NSObject

@property (retain, nonatomic) FLFollowUpController *followUpController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *followUpQueue;

- (id)postFollowUpItem:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_pendingFollowUpWithBackingIdentifier:(id)a0 error:(id *)a1;
- (id)clearFollowUpItem:(id)a0;
- (id)clearFollowUpWithBackingIdentifier:(id)a0;
- (id)clearFollowUpWithIdentifier:(id)a0 account:(id)a1;
- (id)pendingFollowUpWithIdentifier:(id)a0 account:(id)a1;
- (id)pendingFollowUps;
- (id)pendingFollowUpsForAccount:(id)a0;

@end
