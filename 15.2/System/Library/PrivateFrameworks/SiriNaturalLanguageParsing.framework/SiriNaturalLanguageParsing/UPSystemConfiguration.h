@class NSString;

@interface UPSystemConfiguration : NSObject

@property (readonly, copy) NSString *dataDetectorsDirectoryPath;

+ (id)configurationFromDirectoryUrl:(id)a0 error:(id *)a1;
+ (id)_configurationWithDataDetectorsDirectoryPath:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)_initWithDataDetectorsDirectoryPath:(id)a0;

@end
