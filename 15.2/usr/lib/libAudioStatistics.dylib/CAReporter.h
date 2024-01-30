@class NSMutableDictionary, NSDictionary, NSDate, CAReportingPerformanceObject;

@interface CAReporter : NSObject

@property (retain) NSMutableDictionary *internalConfiguration;
@property (retain) NSDate *startDate;
@property (nonatomic) unsigned short serviceType;
@property BOOL started;
@property BOOL removedByClient;
@property BOOL connected;
@property (retain) CAReportingPerformanceObject *perfObject;
@property (readonly) unsigned long long signpostID;
@property (readonly) long long reporterID;
@property (retain, nonatomic) NSDictionary *configuration;

+ (void)sendSingleMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2;

- (void)updateWithReporterID:(long long)a0;
- (void)sendMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2;
- (void)start;
- (id)initWithReporterID:(long long)a0 serviceType:(unsigned short)a1;
- (void).cxx_destruct;
- (id)initWithNewReporterID;
- (void)dealloc;
- (void)cacheServiceType:(unsigned short)a0;
- (id)initWithSessionID:(unsigned int)a0 serviceType:(unsigned short)a1;
- (void)stop;

@end
