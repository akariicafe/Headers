@class NSString, FLFollowUpController;

@interface SRFollowUp : NSObject <SRFollowUpPosting> {
    FLFollowUpController *_followUpController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)postFollowUpItem:(id)a0 completion:(id /* block */)a1;
- (void)pendingFollowUpItemsWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)a0 completion:(id /* block */)a1;

@end
