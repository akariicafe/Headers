@class NSSet, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TSPSupportMetadata : TSPObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_acknowledgedServerData;
    BOOL _isInCollaborationModeForArchiving;
    NSSet *_acknowledgedServerDataForArchiving;
}

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)commonInit;
- (id)packageLocator;
- (long long)tsp_identifier;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (unsigned char)componentRequiredPackageIdentifier;
- (void)takeSnapshotWithCollaborationMode:(BOOL)a0;
- (BOOL)isDataAcknowledgedByServer:(id)a0;
- (void)setData:(id)a0 acknowledgedByServer:(BOOL)a1;
- (void)resetAcknowledgedServerData;
- (void)isDataAcknowledgedByServer:(id)a0 completion:(id /* block */)a1;

@end
