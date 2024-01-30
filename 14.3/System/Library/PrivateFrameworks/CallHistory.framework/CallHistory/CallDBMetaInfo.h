@class NSURL;

@interface CallDBMetaInfo : NSObject

@property (retain) NSURL *dbInfoPrefFile;

- (void).cxx_destruct;
- (void)writeDatabaseVersion:(long long)a0 isTemp:(BOOL)a1;
- (id)initWithURL:(id)a0;
- (BOOL)validateInfo:(BOOL)a0;
- (long long)readDatabaseVersion:(BOOL)a0;

@end
