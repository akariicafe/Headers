@class TASPAdvertisement, NSData, NSDate, NSMutableArray;

@interface TASingleDeviceRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double keepAliveInterval;
@property (retain, nonatomic) NSMutableArray *stagedDetectionResults;
@property (readonly, nonatomic) NSData *address;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) TASPAdvertisement *latestAdvertisement;
@property (readonly, nonatomic) NSDate *keepStagedDetectionAliveUntilDate;
@property (nonatomic) BOOL hasSurfacedNotification;

- (id)descriptionDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateLatestAdvertisement:(id)a0;
- (BOOL)_shouldPushStagedDetection:(id)a0;
- (void)clearAllStagedDetections;
- (void)purgeStagedDetectionsWithClock:(id)a0;
- (id)initWithDeviceAddress:(id)a0 state:(unsigned long long)a1 type:(unsigned long long)a2 date:(id)a3 keepAliveInterval:(double)a4;
- (void)stageDetection:(id)a0;
- (id)getStagedDetections;
- (id)getDetectionsReadyToPush;
- (void)mergeWithAnotherSingleDeviceRecord:(id)a0;

@end
