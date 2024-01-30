@class NSString, NSMutableIndexSet, BKHIDDomainServiceServer, BSMutableIntegerMap;

@interface BKHIDEventDeliveryObserverService : NSObject <BKSHIDEventObserverServerInterface, BKHIDDomainServiceDelegate, BKHIDEventDeliveryResolutionObserver> {
    BKHIDDomainServiceServer *_server;
    NSMutableIndexSet *_observerPIDs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSMutableIntegerMap *_resolutionsByPID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
