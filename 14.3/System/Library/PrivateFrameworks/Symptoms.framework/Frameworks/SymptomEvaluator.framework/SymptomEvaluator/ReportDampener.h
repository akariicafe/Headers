@class NSDate;

@interface ReportDampener : NSObject

@property (retain, nonatomic) NSDate *suppressReportingUntil;
@property (nonatomic) unsigned long long numSuppressedReports;

- (void).cxx_destruct;

@end
