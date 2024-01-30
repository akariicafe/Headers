@class NSData, NSUUID;

@interface AFMyriadRecord : NSObject <NSCopying>

@property (nonatomic) BOOL advertisementDataIsDirty;
@property (nonatomic) unsigned char rawAudioGoodnessScore;
@property (nonatomic) unsigned char bump;
@property (nonatomic) unsigned char goodness;
@property (copy, nonatomic) NSData *advertisementData;
@property (nonatomic) unsigned char userConfidence;
@property (nonatomic) unsigned short pHash;
@property (copy, nonatomic) NSUUID *deviceID;
@property (nonatomic) unsigned char deviceGroup;
@property (nonatomic) unsigned char deviceClass;
@property (nonatomic) unsigned char productType;
@property (nonatomic) unsigned char tieBreaker;
@property (nonatomic) BOOL isMe;
@property (nonatomic) unsigned char isCollectedFromContextCollector;

- (id)init;
- (id)asAdvertisementData;
- (id)initWithAudioData:(id)a0;
- (void)adjustByMultiplier:(float)a0 adding:(int)a1;
- (void).cxx_destruct;
- (void)setRawAudioGoodnessScore:(unsigned char)a0 withBump:(unsigned char)a1;
- (void)generateRandomConfidence;
- (void)generateTiebreaker;
- (BOOL)isCarplayTrump;
- (BOOL)isALateSupressionTrumpFor:(id)a0;
- (BOOL)isAnEmergencyHandled;
- (BOOL)hasEqualAdvertismentData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSane;
- (unsigned long long)hash;
- (BOOL)isATrump;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isSlowdown;
- (BOOL)isInEarTrump;
- (id)initWithDeviceID:(id)a0 data:(id)a1;
- (BOOL)isAnEmergency;
- (int)slowdownDelay;
- (BOOL)isAContinuation;

@end
