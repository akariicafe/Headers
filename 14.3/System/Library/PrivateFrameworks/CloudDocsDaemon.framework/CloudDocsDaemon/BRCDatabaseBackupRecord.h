@class NSString, NSNumber;

@interface BRCDatabaseBackupRecord : NSObject

@property (retain, nonatomic) NSString *relativePath;
@property (retain, nonatomic) NSNumber *fileID;
@property (retain, nonatomic) NSNumber *docID;
@property (nonatomic) unsigned int genCount;
@property (nonatomic) BOOL isDirectory;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRelativePath:(id)a0 fileID:(id)a1 docID:(id)a2 genCount:(unsigned int)a3 isDirectory:(BOOL)a4;
- (id)initWithPQLResultSet:(id)a0;

@end
