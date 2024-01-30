@class NSString;

@interface THIRDPartyApps : NSObject

@property (retain, nonatomic) NSString *processName;
@property (nonatomic) int wifiIn;
@property (nonatomic) int wifiOut;
@property (nonatomic) int cellIn;
@property (nonatomic) int cellOut;

- (void).cxx_destruct;

@end
