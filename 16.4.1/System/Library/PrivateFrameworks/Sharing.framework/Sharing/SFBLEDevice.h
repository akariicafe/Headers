@class NSUUID, NSDictionary, NSData, SFProximityEstimator, NSString, RPIdentity;

@interface SFBLEDevice : NSObject <NSSecureCoding> {
    char _rssiHistory[8];
    unsigned char _rssiCount;
    unsigned char _rssiIndex;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *advertisementData;
@property (copy, nonatomic) NSDictionary *advertisementFields;
@property (copy, nonatomic) NSData *bluetoothAddress;
@property (retain, nonatomic) SFProximityEstimator *closeProximityEstimatorSmall;
@property (retain, nonatomic) SFProximityEstimator *closeProximityEstimatorMedium;
@property (nonatomic) unsigned int connectedServices;
@property (copy, nonatomic) NSUUID *counterpartIdentifier;
@property (nonatomic) long long distance;
@property (nonatomic) unsigned long long foundTicks;
@property (nonatomic) unsigned long long proxPairingTicks;
@property (copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) SFProximityEstimator *infoProximityEstimator;
@property (nonatomic) BOOL insideBubble;
@property (nonatomic) BOOL insideSmallBubble;
@property (nonatomic) BOOL insideMediumBubble;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double lastSeen;
@property (nonatomic) double pairCheckTime;
@property (nonatomic) BOOL paired;
@property (nonatomic) unsigned int productID2;
@property (retain, nonatomic) SFProximityEstimator *proxPairProximityEstimator;
@property (retain, nonatomic) SFProximityEstimator *setupProximityEstimator;
@property (retain, nonatomic) RPIdentity *rpIdentity;
@property (nonatomic) long long rssi;
@property (nonatomic) long long rssiCeiling;
@property (nonatomic) int rssiEstimate;
@property (nonatomic) long long rssiFloor;
@property (nonatomic) long long smoothedRSSI;
@property (nonatomic) BOOL tempPaired;
@property (nonatomic) BOOL triggered;
@property (nonatomic) unsigned char decryptedActivityLevel;
@property (nonatomic) BOOL useBTPipe;

+ (void)setRSSIEstimatorInfo:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)updateRSSI:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
