@class NSMutableDictionary;
@protocol RCPEventDeliveryService;

@interface RCPEventDeliveryServicePool : NSObject <RCPEventDeliveryServicePool>

@property (retain, nonatomic) NSMutableDictionary *deliveryServicesBySenderID;
@property (retain, nonatomic) NSMutableDictionary *deliveryServicesBySenderProperties;
@property (retain, nonatomic) id<RCPEventDeliveryService> fallbackDeliveryService;
@property (nonatomic) BOOL shouldIgnoreSenderProperties;

- (void)tearDown;
- (BOOL)prewarmForSenderProperties:(id)a0 withError:(id *)a1;
- (id)_findServiceForSenderProperties:(id)a0;
- (id)deliveryServiceForSenderProperties:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
