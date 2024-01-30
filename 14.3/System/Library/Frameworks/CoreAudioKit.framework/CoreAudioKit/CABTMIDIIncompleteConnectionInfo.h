@class AMSBTLEPeripheral;

@interface CABTMIDIIncompleteConnectionInfo : NSObject

@property (getter=isConnecting) BOOL connecting;
@property unsigned long long timeOutInterval;
@property (retain, nonatomic) AMSBTLEPeripheral *peripheral;

- (void)dealloc;
- (id)initWithPeripheral:(id)a0 isConnecting:(BOOL)a1;

@end
