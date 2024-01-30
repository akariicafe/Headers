@class NSURL, NSDictionary;

@interface SSRVoiceProfileModelContext : NSObject

@property (readonly, nonatomic) NSURL *configFilePath;
@property (readonly, nonatomic) NSURL *voiceProfileModelFilePath;
@property (readonly, nonatomic) NSDictionary *compareModelFilePaths;

- (void).cxx_destruct;
- (id)initWithConfigFilePath:(id)a0 withModelPath:(id)a1 withCompareModelFilePaths:(id)a2;

@end
