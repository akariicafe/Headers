@class NSObject, NSString, PSSpecifier, NDOManager, NDOACController, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface NDOSpecifierDataSource : PSSpecifierDataSource <NDOAppleCareFlowDelegate> {
    NSObject<OS_dispatch_queue> *_policyLookupQueue;
    NSObject<OS_dispatch_group> *_group;
}

@property (retain, nonatomic) NDOManager *ndoManager;
@property (weak, nonatomic) NDOACController *hostingController;
@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSMutableArray *ndoSpecifiers;
@property (retain, nonatomic) PSSpecifier *warrantyGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *coverageSpecifier;
@property BOOL isDefaultDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadSpecifiers;
- (void)_updateSpecifiers:(id)a0 specifierToInsertAfter:(id)a1 withUpdates:(id)a2;
- (id)acController;
- (id)deviceDescriptionSpecifierWithDeviceInfo:(id)a0;
- (id)initWithDefaultDevice:(BOOL)a0;
- (void)ndoAppleCareCoveragePressed:(id)a0;
- (void)outreachFinishedForDeviceWithSerialNumber:(id)a0 withCompletion:(unsigned long long)a1;
- (void)specifiersWithPolicy:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)updateNDOSpecifiersWithPolicy:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)warrantyDetailText:(id)a0;
- (id)warrantySpecifiersFromDeviceInfo:(id)a0;

@end
