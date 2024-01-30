@class NSString, NSDictionary, HIDVirtualEventService, NSMutableDictionary, RCPEventSenderProperties;

@interface RCPVirtualHIDService : NSObject <HIDVirtualEventServiceDelegate, RCPEventDeliveryService>

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *propertyDictionary;
@property (retain, nonatomic) HIDVirtualEventService *eventService;
@property (retain, nonatomic) NSMutableDictionary *dynamicMetaProperties;
@property (nonatomic) BOOL isOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) RCPEventSenderProperties *properties;
@property (readonly, nonatomic) BOOL isRunning;

+ (id)serviceWithIdentifier:(id)a0 properties:(id)a1;

- (BOOL)startWithError:(id *)a0;
- (id)copyEventMatching:(id)a0 forService:(id)a1;
- (id)propertyForKey:(id)a0 forService:(id)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1 forService:(id)a2;
- (BOOL)setOutputEvent:(id)a0 forService:(id)a1;
- (id)initWithIdentifier:(id)a0 properties:(id)a1;
- (void)postHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)notification:(long long)a0 withProperty:(id)a1 forService:(id)a2;
- (void)stop;
- (void).cxx_destruct;

@end
