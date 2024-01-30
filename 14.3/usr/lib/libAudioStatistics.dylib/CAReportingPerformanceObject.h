@class NSString, NSArray, NSDictionary;

@interface CAReportingPerformanceObject : NSObject

@property (retain) NSString *perfDataPath;
@property (retain) NSString *perfDataName;
@property struct pc_session { } *session;
@property (retain) NSArray *processIdentifiers;
@property (readonly, nonatomic) NSDictionary *performanceMetrics;
@property (nonatomic) unsigned short serviceType;
@property (retain, nonatomic) NSDictionary *configuration;

- (void)begin;
- (void).cxx_destruct;
- (id)endAndReturnPerformanceMetrics;
- (id)initWithProcessIdentifiers:(id)a0;

@end
