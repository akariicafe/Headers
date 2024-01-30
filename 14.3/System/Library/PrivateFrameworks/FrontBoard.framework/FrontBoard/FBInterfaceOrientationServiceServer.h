@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface FBInterfaceOrientationServiceServer : FBSServiceFacility {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_interestedClients;
    long long _interfaceOrientation;
    unsigned long long _sequenceNumber;
}

- (void)noteClientDidConnect:(id)a0 withMessage:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_queue_updateInterest:(unsigned int)a0 forClient:(id)a1 withMessage:(id)a2;
- (void)_queue_handleRegisterOrientationInterest:(id)a0 fromClient:(id)a1;
- (void)_queue_handleRequestActiveOrientation:(id)a0 fromClient:(id)a1;
- (void)noteInterfaceOrientationChanged:(long long)a0 animationSettings:(id)a1 direction:(long long)a2;
- (void)noteClientDidDisconnect:(id)a0;
- (void)noteDidReceiveMessage:(id)a0 withType:(long long)a1 fromClient:(id)a2;
- (id)_prerequisiteMilestones;
- (id)initWithIdentifier:(id)a0 queue:(id)a1;

@end
