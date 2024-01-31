@class NSString, NSDictionary, NSLock, NSMutableArray;

@interface AccessoryIAPInterface : NSObject

@property (nonatomic) struct IOUSBInterfaceStruct942 **interface;
@property (nonatomic) unsigned char bulkOutPipeRef;
@property (nonatomic) unsigned short bulkOutPipeMaxPacketSize;
@property (nonatomic) unsigned char bulkInPipeRef;
@property (nonatomic) unsigned short bulkInPipeMaxPacketSize;
@property (nonatomic) unsigned char interruptInPipeRef;
@property (nonatomic) unsigned short interruptInPipeMaxPacketSize;
@property (nonatomic) char *interruptInPipeBuffer;
@property (retain, nonatomic) NSMutableArray *interfacePropertiesArray;
@property (retain, nonatomic) NSMutableArray *inUseDataBufArray;
@property (retain, nonatomic) NSLock *dataBufLock;
@property (nonatomic) BOOL hasReadInterruptPipe;
@property (retain, nonatomic) NSMutableArray *interruptBulkReadList;
@property (nonatomic) unsigned int interruptBulkReadAllocCount;
@property (nonatomic) unsigned int interruptBulkReadReleaseCount;
@property (nonatomic) BOOL interfaceConfigured;
@property (readonly, nonatomic) unsigned long long registryEntryID;
@property (readonly, nonatomic) unsigned int locationID;
@property (readonly, nonatomic) unsigned long long parentDeviceRegistryEntryID;
@property (readonly, nonatomic) NSDictionary *ioregProperties;
@property (copy, nonatomic) id /* block */ dataInHandler;
@property (nonatomic) BOOL needOutZLP;
@property (nonatomic) unsigned int maxOutLength;
@property (readonly, nonatomic) unsigned short vid;
@property (readonly, nonatomic) unsigned short pid;
@property (readonly, nonatomic) unsigned int vidpid;
@property (readonly, nonatomic) double creationTime;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *aidInfo;

+ (unsigned long long)getRegistryEntryIDFromService:(unsigned int)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)writeData:(id)a0;
- (BOOL)clearUSBHostHIDInterfaces;
- (BOOL)configureInterface:(unsigned int)a0 skipPipeSetup:(BOOL)a1;
- (BOOL)configureNCMInterface:(unsigned char)a0 asCarPlay:(BOOL)a1;
- (void)dismissNotSupportNotification;
- (id)initWithInterface:(unsigned int)a0 andDataInHandler:(id /* block */)a1;
- (id)initWithInterface:(unsigned int)a0 vid:(unsigned short)a1 pid:(unsigned short)a2 aidInfo:(id)a3 andDataInHandler:(id /* block */)a4;
- (BOOL)lockOtherInterfaces;
- (void)presentNotSupportNotification;
- (BOOL)setInterfaceProperties:(id)a0;
- (BOOL)setProperty:(id)a0 forInterfaceNum:(unsigned char)a1;
- (BOOL)setUSBHostHIDInterface:(unsigned char)a0 withHIDFunction:(unsigned int)a1;
- (BOOL)unlockOtherInterfaces;

@end
