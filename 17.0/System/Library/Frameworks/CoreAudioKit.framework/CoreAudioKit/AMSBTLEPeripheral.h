@class NSString, CBPeripheral, CBCentralManager;

@interface AMSBTLEPeripheral : NSObject {
    CBPeripheral *peripheral;
    NSString *uuid;
    NSString *name;
    CBCentralManager *centralManager;
    double lastSeen;
    BOOL inputAvailable;
    BOOL outputAvailable;
    BOOL online;
    BOOL available;
}

@property (readonly) CBPeripheral *peripheral;
@property (readonly, retain) NSString *uuid;
@property (retain) NSString *name;
@property double lastSeen;
@property BOOL inputAvailable;
@property BOOL outputAvailable;
@property (getter=isOnline) BOOL online;
@property (getter=isChangingState) BOOL changingState;
@property (getter=isAvailable) BOOL available;

- (BOOL)hidden;
- (BOOL)disconnect;
- (void)dealloc;
- (BOOL)connect;
- (BOOL)canConnect;
- (id)initWithID:(id)a0 name:(id)a1 manager:(id)a2;
- (BOOL)updateAvailableStateChanged;

@end
