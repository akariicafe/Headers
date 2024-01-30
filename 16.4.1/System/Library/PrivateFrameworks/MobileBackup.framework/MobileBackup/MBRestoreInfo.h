@class NSString, NSDate;

@interface MBRestoreInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDate *date;
@property (readonly) BOOL wasCloudRestore;
@property (readonly) NSString *deviceBuildVersion;
@property (readonly) NSString *backupBuildVersion;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)setDate:(id)a0;
- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (void)setBackupBuildVersion:(id)a0;
- (void)setDeviceBuildVersion:(id)a0;
- (void)setWasCloudRestore:(BOOL)a0;

@end
