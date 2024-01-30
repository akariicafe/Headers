@class NSArray, NSDictionary;

@interface DSGeneralLogCollector : NSObject

@property (retain, nonatomic) NSArray *logFiles;
@property (retain, nonatomic) NSDictionary *friendlyAppNamesDictionary;
@property (retain, nonatomic) NSArray *logIDs;

+ (id)latestUserLog;
+ (id)latestRootLog;

- (void).cxx_destruct;
- (void)getLogFiles;
- (id)logFilesFromEnumerator:(id)a0;
- (id)initWithLogIDs:(id)a0;
- (void)enumerateLogLinesWithBlock:(id /* block */)a0;

@end
