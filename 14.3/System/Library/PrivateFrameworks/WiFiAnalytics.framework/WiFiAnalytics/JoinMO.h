@class NSDate, BSSMO, NSObject;

@interface JoinMO : NSManagedObject

@property (nonatomic) short autojoinPhase;
@property (nonatomic) short cca;
@property (retain, nonatomic) NSObject *channelsScanned;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) int dhcpLatencyMs;
@property (nonatomic) int dhcpLeaseMins;
@property (nonatomic) BOOL dhcpSuccess;
@property (nonatomic) BOOL isAutojoin;
@property (nonatomic) short motionState;
@property (nonatomic) int reason;
@property (nonatomic) short rssi;
@property (nonatomic) short snr;
@property (nonatomic) int status;
@property (nonatomic) int subreason;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) BSSMO *bss;

+ (id)entityName;
+ (id)fetchRequest;

@end
