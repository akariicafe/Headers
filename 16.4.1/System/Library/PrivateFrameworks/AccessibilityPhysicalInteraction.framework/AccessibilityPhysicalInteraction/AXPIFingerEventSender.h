@class NSString, NSDictionary, HIDVirtualEventService, NSObject;
@protocol OS_dispatch_queue;

@interface AXPIFingerEventSender : NSObject <HIDVirtualEventServiceDelegate> {
    long long _eventGenerationCount;
}

@property (retain, nonatomic) HIDVirtualEventService *eventService;
@property (retain, nonatomic) NSDictionary *properties;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventSendingQueue;
@property (retain, nonatomic) NSString *displayUUID;
@property (nonatomic) BOOL shouldAddRealEventFlag;
@property (nonatomic) unsigned long long senderID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyEventMatching:(id)a0 forService:(id)a1;
- (id)propertyForKey:(id)a0 forService:(id)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1 forService:(id)a2;
- (BOOL)setOutputEvent:(id)a0 forService:(id)a1;
- (void)dealloc;
- (void)notification:(long long)a0 withProperty:(id)a1 forService:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)performCancel;
- (id)initWithDisplayUUID:(id)a0;
- (id)_assignFingerIdentifiersToTouches:(id)a0;
- (void)_sendHandEvent:(unsigned int)a0 touchesByFingerIdentifier:(id)a1;
- (void)performDownWithTouches:(id)a0;
- (void)performDownWithTouchesByFingerIdentifier:(id)a0;
- (void)performMoveWithTouches:(id)a0;
- (void)performMoveWithTouchesByFingerIdentifier:(id)a0;
- (void)performUpWithTouches:(id)a0;
- (void)performUpWithTouchesByFingerIdentifier:(id)a0;
- (void)startNewGeneration;

@end
