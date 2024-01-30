@class NSString, NSObject;
@protocol OS_dispatch_source, ACCTransportIOAccessoryConfigStreamProtocol;

@interface ACCTransportIOAccessoryConfigStream : ACCTransportIOAccessoryBase

@property (retain, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceManufacturer;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *deviceHardwareVersion;
@property (retain, nonatomic) NSString *deviceFirmwareVersion;
@property (retain, nonatomic) NSString *deviceSerialNumber;
@property (retain, nonatomic) NSString *devicePPID;
@property (nonatomic) BOOL accInfoValid;
@property (nonatomic) BOOL requestPending;
@property (nonatomic) BOOL categoriesAvailable;
@property (nonatomic) unsigned short requestedCategoryID;
@property (nonatomic) unsigned char requestedPropertyID;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *requestTimer;
@property (weak, nonatomic) id<ACCTransportIOAccessoryConfigStreamProtocol> delegate;
@property (retain, nonatomic) NSString *endpointUUID;
@property (weak, nonatomic) NSString *parentConnectionUUID;

- (BOOL)transmitData:(id)a0;
- (void)dealloc;
- (id)initWithDelegate:(id)a0 andIOService:(unsigned int)a1;
- (id)description;
- (void).cxx_destruct;
- (id)IOAccessoryConfigStreamCopyCategories;
- (BOOL)IOAccessoryConfigStreamSetPropertyData:(id)a0 categoryID:(unsigned short)a1 propertyID:(unsigned char)a2;
- (id)_getStringProperty:(unsigned char)a0 forCategory:(unsigned short)a1;
- (id)IOAccessoryConfigStreamCopyDataForCategoryID:(unsigned short)a0 propertyID:(unsigned char)a1;
- (BOOL)IOAccessoryConfigStreamRequestGetPropertyForCategoryID:(unsigned short)a0 propertyID:(unsigned char)a1;
- (void)_checkAccInfo;
- (id)_getCategories;
- (id)_getPropertyData:(unsigned char)a0 forCategory:(unsigned short)a1;
- (void)_registerForInterestNotifications;
- (void)closeServiceSession;
- (void)handlePropertyDataReceived;
- (BOOL)openServiceSession;

@end
