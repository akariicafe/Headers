@class NSArray, NDOManager, NSObject;
@protocol OS_dispatch_queue;

@interface NDOSpecifierDataSource : PSSpecifierDataSource <NDOAppleCareFlowDelegate> {
    NSObject<OS_dispatch_queue> *_policyLookupQueue;
}

@property (retain, nonatomic) NDOManager *ndoManager;
@property (retain, nonatomic) NSArray *ndoSpecifiers;

- (id)init;
- (void).cxx_destruct;
- (void)loadSpecifiers;
- (void)outreachFinishedWithCompletion:(unsigned long long)a0;
- (void)updateNDOSpecifiersWithPolicy:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)warrantySpecifiersFromWarranty:(id)a0;
- (id)warrantyDetailText:(id)a0;
- (void)ndoAppleCareCoveragePressed:(id)a0;
- (id)acController;

@end
