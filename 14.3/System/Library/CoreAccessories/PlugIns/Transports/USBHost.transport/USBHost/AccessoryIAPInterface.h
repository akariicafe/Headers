@class NSLock, NSMutableArray, NSDictionary;

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
@property (readonly, nonatomic) unsigned long long registryEntryID;
@property (readonly, nonatomic) unsigned int locationID;
@property (readonly, nonatomic) unsigned long long parentDeviceRegistryEntryID;
@property (readonly, nonatomic) NSDictionary *ioregProperties;
@property (copy, nonatomic) id /* block */ dataInHandler;
@property (nonatomic) BOOL needOutZLP;
@property (nonatomic) unsigned int maxOutLength;

+ (unsigned long long)getRegistryEntryIDFromService:(unsigned int)a0;

- (void).cxx_destruct;
- (BOOL)configureInterface:(unsigned int)a0;
- (void)dealloc;
- (BOOL)writeData:(id)a0;
- (id)description;
- (id)initWithInterface:(unsigned int)a0 andDataInHandler:(id /* block */)a1;
- (BOOL)unlockOtherInterfaces;
- (BOOL)lockOtherInterfaces;
- (BOOL)setUSBHostHIDInterface:(unsigned char)a0 withHIDFunction:(unsigned int)a1;
- (BOOL)clearUSBHostHIDInterfaces;
- (BOOL)configureNCMInterface:(unsigned char)a0 asCarPlay:(BOOL)a1;
- (BOOL)setProperty:(id)a0 forInterfaceNum:(unsigned char)a1;
- (BOOL)setInterfaceProperties:(id)a0;

@end
