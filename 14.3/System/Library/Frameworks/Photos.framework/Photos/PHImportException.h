@class NSString, NSError, NSDate;

@interface PHImportException : NSObject

@property (readonly, nonatomic) NSDate *createDate;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *sourceCodeFile;
@property (readonly, nonatomic) unsigned long long lineNumber;
@property (readonly, nonatomic) NSError *underlyingError;

+ (id)logForAllExceptions:(id)a0;

- (id)initWithType:(long long)a0 path:(id)a1 underlyingError:(id)a2 file:(char *)a3 line:(unsigned long long)a4;
- (void).cxx_destruct;
- (id)description;

@end
