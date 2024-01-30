@class NSString, PFUbiquityLocation, PFUbiquityContainerIdentifier, NSObject;
@protocol OS_dispatch_queue, NSCoding, NSObject, NSCopying;

@interface PFUbiquityContainerMonitor : NSObject {
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_localPeerID;
    NSString *_storeName;
    BOOL _hasScheduledCheckBlock;
    int _scheduleSpinLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

@property (nonatomic) int containerState;
@property (nonatomic) int monitorState;
@property (readonly, nonatomic) PFUbiquityContainerIdentifier *containerIdentifier;
@property (readonly, nonatomic) id<NSObject, NSCopying, NSCoding> currentIdentityToken;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)stopMonitor;
- (id)initWithProcessingQueue:(id)a0 localPeerID:(id)a1 storeName:(id)a2 andUbiquityRootLocation:(id)a3;
- (BOOL)startMonitor:(id *)a0;
- (void)_applicationResumed:(id)a0;
- (void)willChangeContainerState;
- (void)didChangeContainerState;
- (void)willChangeMonitorState;
- (void)didChangeMonitorState;
- (void)willChangeContainerIdentifier:(unsigned long long)a0;
- (void)containerDeleteDetected:(id)a0;
- (void)didChangeContainerIdentifier:(unsigned long long)a0;
- (void)ubiquityIdentityChanged:(id)a0;
- (void)setContainerIdentifier:(id)a0 transitionType:(unsigned long long)a1;
- (void)scheduleCheckBlock:(id)a0;
- (void)checkStoresAndContainer:(id)a0;

@end
