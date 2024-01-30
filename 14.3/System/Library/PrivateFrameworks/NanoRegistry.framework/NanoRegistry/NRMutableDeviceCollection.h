@class NSUUID, NSMutableDictionary, NRPBMutableDeviceCollection, NRMutableDevice;

@interface NRMutableDeviceCollection : NRMutableStateBase <NRMutableStateParentDelegate, NSFastEnumeration> {
    NSMutableDictionary *_deviceCollection;
    NSMutableDictionary *_childMap;
}

@property (readonly, nonatomic) NRMutableDevice *activeDevice;
@property (retain, nonatomic) NSUUID *activeDeviceID;
@property (readonly, nonatomic, getter=paired) BOOL isPaired;
@property (readonly, nonatomic, getter=allAltAccount) BOOL isAllAltAccount;
@property (retain, nonatomic) NRPBMutableDeviceCollection *protobuf;

+ (BOOL)supportsSecureCoding;
+ (void)parseDiff:(id)a0 forPropertyChange:(id)a1 withBlock:(id /* block */)a2;
+ (id)diffFrom:(id)a0 to:(id)a1;

- (id)deviceForPairingID:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)_createIndex;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setDevice:(id)a0 forPairingID:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)applyDiff:(id)a0 upOnly:(BOOL)a1 notifyParent:(BOOL)a2 unconditional:(BOOL)a3;
- (void)child:(id)a0 didApplyDiff:(id)a1;
- (unsigned long long)hash;
- (id)_diffsToChangeActiveDeviceToDeviceID:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)removeDeviceForPairingID:(id)a0;
- (id)allPairingIDs;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (unsigned long long)count;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;

@end
