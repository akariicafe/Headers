@class NSString, CBPeripheral, NSData, NSMutableDictionary, NSNumber, NSMapTable;

@interface HAPRecentlySeenPairedBTLEPeripheralTuple : HMFObject

@property (readonly, nonatomic) double lastSeen;
@property (retain, nonatomic) CBPeripheral *peripheral;
@property (retain, nonatomic) NSNumber *statusFlags;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *stateNumber;
@property (retain, nonatomic) NSNumber *configNumber;
@property (retain, nonatomic) NSNumber *categoryIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *setupHash;
@property (nonatomic) unsigned long long advertisementFormat;
@property (nonatomic) BOOL notifyingCharacteristicUpdated;
@property (readonly, nonatomic) NSMutableDictionary *cachedDescriptors;
@property (readonly, nonatomic) NSMapTable *cachedCharacteristicSignatures;
@property (readonly, nonatomic) NSMapTable *cachedServiceSignatures;
@property (nonatomic) BOOL monitorState;
@property (nonatomic) unsigned long long connectionPriority;

- (id)description;
- (void).cxx_destruct;
- (id)initRecentlySeenPairedBTLEPeripheral:(id)a0 statusFlags:(id)a1 stateNumber:(id)a2 category:(id)a3 configNumber:(id)a4 name:(id)a5 identifier:(id)a6 advertisementFormat:(unsigned long long)a7 setupHash:(id)a8;
- (void)updateWithPeripheral:(id)a0;
- (void)updatePairedPeripheralConfiguration:(BOOL)a0 connectionPriority:(unsigned long long)a1;

@end
