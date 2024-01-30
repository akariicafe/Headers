@class NSString, NSMutableDictionary, NSData, NSNumber;

@interface WiFiUsageParsedBeacon : NSObject

@property (retain, nonatomic) NSString *bssid;
@property (retain, nonatomic) NSString *apName;
@property (nonatomic) NSNumber *isBeaconAtHeRate;
@property (nonatomic) unsigned short beaconInterval;
@property (nonatomic) unsigned short capabilities;
@property (nonatomic) unsigned char channel;
@property (nonatomic) unsigned char band;
@property (nonatomic) unsigned char colocated6Ghz;
@property (nonatomic) unsigned char colocated6GhzIsPSC;
@property (nonatomic) BOOL hasHT;
@property (nonatomic) unsigned short htInfo;
@property (nonatomic) unsigned char htAMPDUParams;
@property (nonatomic) unsigned short htExtendedCapabilities;
@property (nonatomic) unsigned int htTxBFCapabilities;
@property (nonatomic) unsigned char htAntennaSelection;
@property (nonatomic) unsigned char htRxNSS;
@property (nonatomic) unsigned char htTxNSS;
@property (nonatomic) BOOL hasVHT;
@property (nonatomic) unsigned int vhtInfo;
@property (nonatomic) unsigned short vhtRxMCSMap;
@property (nonatomic) unsigned short vhtRxMaxRate;
@property (nonatomic) unsigned short vhtTxMCSMap;
@property (nonatomic) unsigned short vhtTxMaxRate;
@property (nonatomic) unsigned char vhtRxNSS;
@property (nonatomic) unsigned char vhtTxNSS;
@property (nonatomic) BOOL hasHE;
@property (retain, nonatomic) NSData *heMACInfo;
@property (retain, nonatomic) NSData *hePHYInfo;
@property (nonatomic) unsigned short heRxMCSMap80MHz;
@property (nonatomic) unsigned short heTxMCSMap80MHz;
@property (nonatomic) unsigned short heRxMCSMap160MHz;
@property (nonatomic) unsigned short heTxMCSMap160MHz;
@property (nonatomic) unsigned short heRxMCSMap8080MHz;
@property (nonatomic) unsigned short heTxMCSMap8080MHz;
@property (nonatomic) unsigned char heRxNSS;
@property (nonatomic) unsigned char heTxNSS;
@property (retain, nonatomic) NSMutableDictionary *taggedIEList;
@property (retain, nonatomic) NSMutableDictionary *vendorIEList;
@property (retain, nonatomic) NSMutableDictionary *extendedIEList;
@property (nonatomic) BOOL parsingSuccessful;
@property (readonly, nonatomic) NSData *htMCSSet;

+ (void)initialize;
+ (void)defaults;
+ (id)config;
+ (void)updateConfig;
+ (id)isValidIE:(unsigned char)a0 ofLen:(unsigned char)a1 withIsExtended:(BOOL)a2;

- (id)initWithBeaconData:(id)a0 andAdditionalMetadata:(id)a1;
- (BOOL)parseBeaconIE:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;
- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;

@end
