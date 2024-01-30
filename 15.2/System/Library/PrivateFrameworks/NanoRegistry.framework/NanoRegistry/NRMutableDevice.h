@class NSUUID, NRPBMutableDevice, NSMutableDictionary;

@interface NRMutableDevice : NRMutableStateBase <NRMutableStateParentDelegate, NSFastEnumeration> {
    NSMutableDictionary *_properties;
}

@property (readonly, nonatomic) NSUUID *pairingID;
@property (readonly, nonatomic) BOOL isPaired;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isArchived;
@property (readonly, nonatomic) BOOL migratable;
@property (readonly, nonatomic) BOOL isAltAccount;
@property (retain, nonatomic) NRPBMutableDevice *protobuf;

+ (BOOL)supportsSecureCoding;
+ (id)diffsToPair:(BOOL)a0 withDate:(id)a1;
+ (id)diffsToSetStatusCode:(unsigned long long)a0 andCompatibilityState:(unsigned short)a1;
+ (void)parseDiff:(id)a0 forPropertyChange:(id)a1 withBlock:(id /* block */)a2;
+ (id)enclosedClassTypes;
+ (id)diffsToClearStatusCodeAndCompatibilityState;
+ (id)diffsToSetStatusCode:(unsigned long long)a0;
+ (id)diffFrom:(id)a0 to:(id)a1;
+ (id)diffsToActivate:(BOOL)a0 withDate:(id)a1;

- (id)allPropertyNames;
- (void)child:(id)a0 didApplyDiff:(id)a1;
- (id)propertyForName:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)_createIndex:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithProtobuf:(id)a0;
- (id)description;
- (id)applyDiff:(id)a0 upOnly:(BOOL)a1 notifyParent:(BOOL)a2 unconditional:(BOOL)a3;
- (void)setProperty:(id)a0 forName:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invalidate;
- (unsigned long long)count;
- (unsigned long long)hash;
- (void)removePropertyForName:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (BOOL)supportsCapability:(id)a0;

@end
