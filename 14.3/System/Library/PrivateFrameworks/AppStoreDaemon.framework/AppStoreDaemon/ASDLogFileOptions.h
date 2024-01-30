@class NSString;

@interface ASDLogFileOptions : NSObject <NSCopying>

@property (copy, nonatomic) NSString *logDirectoryPath;
@property (copy, nonatomic) NSString *logFileBaseName;
@property (nonatomic) unsigned long long maxLogFileSize;
@property (nonatomic) long long maxNumberOfLogFiles;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
