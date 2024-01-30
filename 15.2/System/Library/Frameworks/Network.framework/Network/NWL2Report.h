@class NSString, NSMutableArray;

@interface NWL2Report : NSObject

@property (nonatomic) int cellularLQM;
@property (nonatomic) BOOL cellularKnownGood;
@property (nonatomic) unsigned char cellularRadioTechnology;
@property (nonatomic) int cellularMNC;
@property (nonatomic) int cellularMCC;
@property (nonatomic) int cellularUARFCN;
@property (nonatomic) int cellularPID;
@property (nonatomic) int cellularBandInfo;
@property (retain, nonatomic) NSString *cellularCellType;
@property (nonatomic) int cellularBandwidth;
@property (nonatomic) int cellularTAC;
@property (nonatomic) int cellularBars;
@property (nonatomic) unsigned char cellularBand;
@property (nonatomic) unsigned int cellularMode;
@property (nonatomic) unsigned char cellularDualSimStatus;
@property (nonatomic) int cellularSecondaryMnc;
@property (nonatomic) int cellularSecondaryMcc;
@property (nonatomic) BOOL cellularOutranksWiFi;
@property (nonatomic) int cellularOutrankPrimaryReason;
@property (nonatomic) unsigned long long cellularOutrankReasonFlags;
@property (nonatomic) int wifiLQM;
@property (nonatomic) int wifiRSSI;
@property (nonatomic) BOOL wifiKnownGood;
@property (nonatomic) unsigned char wifiRadioTechnology;
@property (retain, nonatomic) NSMutableArray *interfaceQueueStats;

- (id)awdReport;
- (id)description;
- (void).cxx_destruct;

@end
