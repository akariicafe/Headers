@class NSString, NSMutableArray, NSMutableDictionary;

@interface OSAReport : NSObject {
    NSString *_incidentID;
    NSString *_logType;
    NSMutableDictionary *_logWritingOptions;
}

@property (readonly, nonatomic) double capture_time;
@property (readonly, nonatomic) NSMutableArray *notes;
@property (readonly, nonatomic) NSString *logfile;

+ (id)bootArgs;
+ (id)kernelVersionDescription;
+ (id)systemIDWithDescription:(BOOL)a0;
+ (unsigned char)executeWithTimeout:(unsigned int)a0 Code:(id /* block */)a1;

- (void)generateLogAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (id)problemType;
- (BOOL)isActionable;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isAppleTV;
- (id)appleCareDetails;
- (id)additionalIPSMetadata;
- (void)symlink:(id)a0;
- (int)streamContentAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (void)alignIncident:(id)a0 at:(double)a1;
- (double)captureTime;
- (id)reportNamePrefix;
- (BOOL)secondChanceToSylog;
- (id)incidentID;
- (id)getSyslogForPid:(int)a0 andOptionalSenders:(id)a1;
- (BOOL)saveWithOptions:(id)a0;

@end
