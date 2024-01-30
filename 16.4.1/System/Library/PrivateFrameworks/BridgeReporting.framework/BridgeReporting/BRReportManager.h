@class NSString, BRRTCPairingReportManager;

@interface BRReportManager : NSObject

@property (nonatomic) unsigned short category;
@property (copy, nonatomic) NSString *configuration;
@property (weak, nonatomic) BRRTCPairingReportManager *pairingReportManager;
@property (nonatomic) BOOL pairingReportUnderway;

+ (id)reporterWithCatergory:(unsigned short)a0;

- (id)initWithCategory:(unsigned short)a0;
- (void).cxx_destruct;
- (id)categortyToConfiguration:(unsigned short)a0;
- (void)reportRTCMetric:(id)a0;

@end
