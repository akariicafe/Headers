@class NSString, NSDate, NSMutableArray, pidMapper;

@interface wspContext : NSObject

@property (retain) NSString *serverName;
@property (retain) NSString *serverAddress;
@property (retain) NSString *userName;
@property (retain) NSString *clientMachineName;
@property (retain) NSString *searchPath;
@property int queryType;
@property struct timespec { long long tv_sec; long long tv_nsec; } modDateSpec;
@property (retain) NSString *contentPattern;
@property (retain) NSMutableArray *fnamePatterns;
@property (retain) NSMutableArray *fextPatterns;
@property (retain) NSDate *modDate;
@property (retain) pidMapper *pidMap;
@property (readonly) unsigned int serverVersion;
@property (readonly) BOOL supports64BitOffsets;
@property unsigned int trueSequential;
@property unsigned int workID;
@property unsigned int cursor;
@property unsigned int whereID;
@property unsigned int seekBookmarkOffset;
@property unsigned int seekSkip;
@property unsigned int rowsSoFar;

- (id)init;
- (void).cxx_destruct;
- (void)logContents;
- (void)setServerVersion:(unsigned int)a0;
- (void)setContentSearch:(id)a0;
- (BOOL)serverSupports64BitOffsets;
- (void)setFileExtSearch:(id)a0;
- (void)setFilenameSearch:(id)a0;
- (void)setModDateSearch:(id)a0;

@end
