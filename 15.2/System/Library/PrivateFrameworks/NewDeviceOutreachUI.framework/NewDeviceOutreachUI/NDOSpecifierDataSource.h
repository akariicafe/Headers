@class NSString, NSArray, NDOManager, NDOACController, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface NDOSpecifierDataSource : PSSpecifierDataSource <NDOAppleCareFlowDelegate> {
    NSObject<OS_dispatch_queue> *_policyLookupQueue;
    NSObject<OS_dispatch_group> *_group;
}

@property (retain, nonatomic) NDOManager *ndoManager;
@property (weak, nonatomic) NDOACController *hostingController;
@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSArray *ndoSpecifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)loadSpecifiers;
- (void)outreachFinishedForDeviceWithSerialNumber:(id)a0 withCompletion:(unsigned long long)a1;
- (id)acController;
- (void)updateNDOSpecifiersWithPolicy:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)specifiersWithForceCachedPolicy;
- (id)warrantySpecifiersFromDeviceInfo:(id)a0;
- (id)warrantyDetailText:(id)a0;
- (id)deviceDescriptionSpecifierWithDeviceInfo:(id)a0;
- (void)ndoAppleCareCoveragePressed:(id)a0;
- (void)_updateSpecifiers:(id)a0 specifierToInsertAfter:(id)a1 withUpdates:(id)a2;
- (void)specifiersWithPolicy:(unsigned long long)a0 completionHandler:(id /* block */)a1;

@end
