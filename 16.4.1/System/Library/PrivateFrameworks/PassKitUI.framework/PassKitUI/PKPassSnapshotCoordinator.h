@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface PKPassSnapshotCoordinator : NSObject <PKPassSnapshotCoordinatorProtocol> {
    NSArray *_secureElementIdentifiers;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_createPassSnapshotFromPaymentPass:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (id)_fallbackImageForCredential:(id)a0;
- (id)cardSnapshotForSource:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (id)initWithSEIDs:(id)a0;

@end
