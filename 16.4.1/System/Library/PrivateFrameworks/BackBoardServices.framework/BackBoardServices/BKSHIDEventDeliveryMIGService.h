@class NSString;

@interface BKSHIDEventDeliveryMIGService : NSObject <BKSHIDEventDeliveryService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setKeyCommandsRegistrations:(id)a0;
- (void)setDiscreteDispatchingRuleSets:(id)a0;
- (void)setDeferringRules:(id)a0;
- (void)setKeyCommandsDispatchingRules:(id)a0;
- (void)setBufferingPredicates:(id)a0;

@end
