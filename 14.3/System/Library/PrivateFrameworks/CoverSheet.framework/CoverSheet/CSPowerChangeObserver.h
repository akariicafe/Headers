@protocol CSPowerStatusProviding, NSObject;

@interface CSPowerChangeObserver : NSObject {
    id<NSObject> _notificationToken;
    id<CSPowerStatusProviding> _statusProvider;
}

@property (copy, nonatomic) id /* block */ block;
@property (nonatomic, getter=isConnectedToPower) BOOL connectedToPower;
@property (nonatomic) BOOL isConnectedToQiPower;
@property (nonatomic) BOOL isConnectedToWirelessInternalChargingAccessory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStatusProvider:(id)a0 notificationName:(id)a1 updateBlock:(id /* block */)a2;
- (void)update;
- (void)setIsConnectedToPower:(BOOL)a0;

@end
