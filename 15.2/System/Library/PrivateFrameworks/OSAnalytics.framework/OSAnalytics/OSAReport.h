@class NSString, NSMutableArray, NSMutableDictionary;

@interface OSAReport : NSObject {
    NSString *_incidentID;
    NSString *_logType;
    NSMutableDictionary *_logWritingOptions;
}

@property (readonly, nonatomic) double capture_time;
@property (readonly, nonatomic) NSMutableArray *notes;
@property (readonly, nonatomic) NSString *logfile;
@property (retain, nonatomic) NSString *etlKey;

+ (id)systemIDWithDescription:(BOOL)a0;
+ (id)bootArgs;
+ (id)findBundleAtPath:(id)a0 withKeys:(id)a1 bundleURL:(inout id *)a2;
+ (unsigned char)executeWithTimeout:(unsigned int)a0 Code:(id /* block */)a1;
+ (id)kernelVersionDescription;

- (id)incidentID;
- (BOOL)isActionable;
- (double)captureTime;
- (void)generateLogAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (id)problemType;
- (BOOL)saveWithOptions:(id)a0;
- (void)alignIncident:(id)a0 at:(double)a1;
- (int)streamContentAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)additionalIPSMetadata;
- (id)appleCareDetails;
- (id)init;
- (BOOL)isAppleTV;
- (void)symlink:(id)a0;
- (id)reportNamePrefix;
- (id)getSyslogForPid:(int)a0 andOptionalSenders:(id)a1;

@end
