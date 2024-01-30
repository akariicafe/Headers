@class NSString, NSArray, CBPeripheral, NSMutableArray;

@interface AXFakePSAPDevice : AXPSAPDevice {
    NSMutableArray *_leftFakePrograms;
    NSMutableArray *_rightFakePrograms;
    id /* block */ _writeBlock;
}

@property (nonatomic) BOOL connected;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *manufacturer;
@property (retain, nonatomic) NSArray *model;
@property (retain, nonatomic) NSString *leftUUID;
@property (retain, nonatomic) NSString *rightUUID;
@property (nonatomic) BOOL isConnecting;
@property (retain, nonatomic) NSString *leftFirmwareVersion;
@property (retain, nonatomic) NSString *rightFirmwareVersion;
@property (retain, nonatomic) NSString *leftHardwareVersion;
@property (retain, nonatomic) NSString *rightHardwareVersion;
@property (nonatomic) unsigned long long deviceType;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long excludedProperties;
@property (retain, nonatomic) CBPeripheral *leftPeripheral;
@property (retain, nonatomic) CBPeripheral *rightPeripheral;

- (void)connect;
- (BOOL)isConnected;
- (BOOL)isPersistent;
- (void)disconnect;
- (void)persist;
- (id)initWithDeviceType:(unsigned long long)a0;
- (id)valueForProperty:(unsigned long long)a0;
- (void)setValue:(id)a0 forProperty:(unsigned long long)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isLeftConnected;
- (unsigned long long)availablePropertiesForPeripheral:(id)a0;
- (void)createPrograms;
- (BOOL)deviceSupportsProperty:(unsigned long long)a0;
- (BOOL)didLoadBasicProperties;
- (BOOL)didLoadRequiredProperties;
- (BOOL)hasConnection;
- (BOOL)isFakeDevice;
- (BOOL)isRightConnected;
- (BOOL)leftAvailable;
- (id)leftPrograms;
- (id)manufacturerForType;
- (id)modelForType;
- (id)persistentRepresentation;
- (BOOL)programsListsAreEqual;
- (BOOL)propertyIsAvailable:(unsigned long long)a0 forEar:(int)a1;
- (void)registerWriteBlock:(id /* block */)a0;
- (BOOL)rightAvailable;
- (id)rightPrograms;
- (void)setNewName:(id)a0;
- (BOOL)showCombinedPrograms;
- (void)writeInt:(unsigned char)a0 toEar:(int)a1 forProperty:(unsigned long long)a2;
- (void)writeSignedInt:(char)a0 toEar:(int)a1 forProperty:(unsigned long long)a2;

@end
