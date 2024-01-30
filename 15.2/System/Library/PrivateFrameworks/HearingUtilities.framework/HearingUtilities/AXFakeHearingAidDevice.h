@class NSString, NSArray, CBPeripheral, NSDate, NSMutableArray;

@interface AXFakeHearingAidDevice : AXHearingAidDevice {
    NSMutableArray *_leftFakePrograms;
    NSMutableArray *_rightFakePrograms;
    id /* block */ _writeBlock;
}

@property (nonatomic) int type;
@property (nonatomic) BOOL connected;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *manufacturer;
@property (retain, nonatomic) NSArray *model;
@property (retain, nonatomic) NSString *leftUUID;
@property (retain, nonatomic) NSString *rightUUID;
@property (nonatomic) double rightBatteryLevel;
@property (nonatomic) double leftBatteryLevel;
@property (nonatomic) BOOL isConnecting;
@property (retain, nonatomic) NSString *leftFirmwareVersion;
@property (retain, nonatomic) NSString *rightFirmwareVersion;
@property (retain, nonatomic) NSString *leftHardwareVersion;
@property (retain, nonatomic) NSString *rightHardwareVersion;
@property (retain, nonatomic) NSDate *leftBatteryLowDate;
@property (retain, nonatomic) NSDate *rightBatteryLowDate;
@property (nonatomic) short leftMicrophoneVolumeSteps;
@property (nonatomic) short rightMicrophoneVolumeSteps;
@property (nonatomic) unsigned long long excludedProperties;
@property (retain, nonatomic) CBPeripheral *leftPeripheral;
@property (retain, nonatomic) CBPeripheral *rightPeripheral;

- (void)connect;
- (BOOL)isPersistent;
- (void)disconnect;
- (void)persist;
- (id)valueForProperty:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forProperty:(unsigned long long)a1;
- (BOOL)isConnected;
- (void)dealloc;
- (id)initWithDeviceType:(int)a0;
- (id)manufacturerForType;
- (id)modelForType;
- (BOOL)leftAvailable;
- (BOOL)rightAvailable;
- (void)createPrograms;
- (unsigned long long)availablePropertiesForPeripheral:(id)a0;
- (BOOL)programsListsAreEqual;
- (id)leftPrograms;
- (id)rightPrograms;
- (id)persistentRepresentation;
- (BOOL)isLeftConnected;
- (BOOL)isRightConnected;
- (BOOL)hasConnection;
- (BOOL)deviceSupportsProperty:(unsigned long long)a0;
- (BOOL)propertyIsAvailable:(unsigned long long)a0 forEar:(int)a1;
- (BOOL)showCombinedPrograms;
- (void)writeInt:(unsigned char)a0 toEar:(int)a1 forProperty:(unsigned long long)a2;
- (void)writeSignedInt:(char)a0 toEar:(int)a1 forProperty:(unsigned long long)a2;
- (BOOL)didLoadBasicProperties;
- (BOOL)didLoadRequiredProperties;
- (void)registerWriteBlock:(id /* block */)a0;
- (void)setNewName:(id)a0;
- (BOOL)isFakeDevice;

@end
