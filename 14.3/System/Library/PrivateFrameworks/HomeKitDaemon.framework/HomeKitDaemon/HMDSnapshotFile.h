@class HMFOSTransaction, NSString, NSData, NSDate, NSNumber;

@interface HMDSnapshotFile : HMFObject <HMFLogging>

@property (retain, nonatomic) NSNumber *slotIdentifier;
@property (retain, nonatomic) HMFOSTransaction *snapshotCATransaction;
@property (readonly) NSString *directory;
@property (readonly) NSString *filePath;
@property (readonly) NSDate *snapshotTimestamp;
@property (readonly) NSNumber *aspectRatio;
@property (readonly) BOOL externalFilePath;
@property (readonly) NSData *encodedDataForIDSSend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)logIdentifier;
- (id)initWithImageDirectory:(id)a0;
- (BOOL)prepareParametersWithFilePath:(id)a0 snapshotData:(id)a1 directory:(id)a2 snapshotTimestamp:(id)a3 resize:(BOOL)a4 writeBack:(BOOL)a5;
- (id)initWithImageDirectory:(id)a0 filePath:(id)a1 snapshotTimestamp:(id)a2;
- (id)initWithImageDirectory:(id)a0 snapshotData:(id)a1;
- (id)initWithImageDirectory:(id)a0 externalFilePath:(id)a1 snapshotTimestamp:(id)a2;
- (id)copyFileAtPath:(id)a0 snapshotTimestamp:(id)a1;
- (void)updateSlotIdentifier;
- (BOOL)decodeIDSDataReceived:(id)a0 snapshotDataTransaction:(id)a1;

@end
