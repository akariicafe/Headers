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

- (BOOL)isSane;
- (BOOL)isSlowdown;
- (BOOL)isATrump;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isAContinuation;
- (id)asAdvertisementData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAudioData:(id)a0;
- (id)initWithDeviceID:(id)a0 data:(id)a1;
- (void)setRawAudioGoodnessScore:(unsigned char)a0 withBump:(unsigned char)a1;
- (void)adjustByMultiplier:(float)a0 adding:(int)a1;
- (void)generateRandomConfidence;
- (void)generateTiebreaker;
- (BOOL)isInEarTrump;
- (BOOL)isCarplayTrump;
- (BOOL)isALateSupressionTrumpFor:(id)a0;
- (BOOL)isAnEmergency;
- (BOOL)isAnEmergencyHandled;
- (int)slowdownDelay;
- (BOOL)hasEqualAdvertismentData:(id)a0;
- (unsigned long long)hash;

@end
