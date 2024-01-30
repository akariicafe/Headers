@class NSSet, RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue, COCapabilityLegacyShimDelegate;

@interface COCapabilityLegacyShim : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSSet *supportedCapabilities;
@property (copy, nonatomic) NSSet *availableCapabilities;
@property (copy, nonatomic) NSSet *companionCapabilities;
@property (getter=isCompanionQueryInProgress) BOOL companionQueryInProgress;
@property (getter=isCompanionQueryNeeded) BOOL companionQueryNeeded;
@property (getter=isCompanionQueryUnsuccessful) BOOL companionQueryUnsuccessful;
@property (getter=isCompanionQueryIncompatible) BOOL companionQueryIncompatible;
@property (readonly, nonatomic) RPCompanionLinkClient *rapport;
@property (readonly, weak, nonatomic) id<COCapabilityLegacyShimDelegate> delegate;

- (void)_withLock:(id /* block */)a0;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_notifyDelegate:(id)a0;
- (void)_stateUpdate;
- (BOOL)_rapportEventShouldUpdateState:(id)a0;
- (BOOL)_isStereoPairMember;
- (BOOL)_isStereoPeer:(id)a0;
- (BOOL)_isStereoPeerActive;
- (id)_messageCreateRequest;
- (id)_messageCreateResponse;
- (id)_messageDecodeCapabilities:(id)a0;
- (id)_messageEncodeCapabilities;
- (BOOL)_messageValidateRequest:(id)a0;
- (BOOL)_messageValidateResponse:(id)a0;
- (void)_rapportDeregister;
- (void)_rapportProcessRequest:(id)a0 emittingResponse:(id /* block */)a1;
- (void)_rapportProcessResponse:(id)a0 error:(id)a1;
- (void)_rapportRegister;
- (void)_rapportStart;
- (void)_rapportStop;
- (void)_stateQuery;

@end
