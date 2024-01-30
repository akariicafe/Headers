@class NSString, NSNumber;

@interface HAPRecentlySeenPairedBTLEPeripheralTuple : HMFObject {
    double _lastSeen;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL notifyingCharacteristicUpdated;
@property (nonatomic) BOOL monitorState;
@property (nonatomic) unsigned long long connectionPriority;
@property (nonatomic) unsigned long long advertisementFormat;
@property (retain, nonatomic) NSNumber *stateNumber;
@property (retain, nonatomic) NSNumber *configNumber;
@property (retain, nonatomic) NSNumber *category;

- (id)description;
- (void).cxx_destruct;
- (id)initRecentlySeenPairedHAPBLEPeripheral:(id)a0;
- (void)updatePairedPeripheralConfiguration:(BOOL)a0 connectionPriority:(unsigned long long)a1;
- (void)updateWithPeripheral:(id)a0;

@end
