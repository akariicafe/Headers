@class IDSCKContainer, NSString, IDSCloudKitKeyElectionStore, IDSCloudKitTransportLog, IDSCloudKitKeyValueStore, NSObject, IDSCloudKitGroupServer;
@protocol OS_dispatch_queue;

@interface IDSCloudKitContainer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IDSCKContainer *container;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) IDSCloudKitKeyValueStore *keyValueStore;
@property (readonly, nonatomic) IDSCloudKitGroupServer *publicGroupServer;
@property (readonly, nonatomic) IDSCloudKitGroupServer *privateGroupServer;
@property (readonly, nonatomic) IDSCloudKitTransportLog *transportLog;
@property (readonly, nonatomic) IDSCloudKitKeyElectionStore *keyElectionStore;

- (id)initWithIdentifier:(id)a0 queue:(id)a1;
- (void).cxx_destruct;

@end
