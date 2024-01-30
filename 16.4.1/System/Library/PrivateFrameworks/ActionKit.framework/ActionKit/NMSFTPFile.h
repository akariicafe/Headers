@class NSString, NSNumber, NSDate;

@interface NMSFTPFile : NSObject <NSCopying>

@property (retain, nonatomic) NSString *filename;
@property (nonatomic) BOOL isDirectory;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSDate *lastAccess;
@property (retain, nonatomic) NSNumber *fileSize;
@property (nonatomic) unsigned long long ownerUserID;
@property (nonatomic) unsigned long long ownerGroupID;
@property (retain, nonatomic) NSString *permissions;
@property (nonatomic) unsigned long long flags;

+ (id)fileWithName:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithFilename:(id)a0;
- (char)filetypeletter:(unsigned long long)a0;
- (id)convertPermissionToSymbolicNotation:(unsigned long long)a0;
- (void)populateValuesFromSFTPAttributes:(struct _LIBSSH2_SFTP_ATTRIBUTES { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; })a0;

@end
