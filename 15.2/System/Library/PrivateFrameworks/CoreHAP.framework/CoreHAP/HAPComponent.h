@protocol HAPBTLECentralManagerDelegate;

@interface HAPComponent : HMFObject

@property (weak, nonatomic) id<HAPBTLECentralManagerDelegate> centralManagerDelegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
