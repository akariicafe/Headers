@class NSURL, NSDictionary;

@interface SSRSpeakerRecognitionModelContext : NSObject

@property (readonly, nonatomic) NSURL *configFilePath;
@property (readonly, nonatomic) NSDictionary *voiceProfilesModelFilePaths;

- (void).cxx_destruct;
- (id)initWithConfigFilePath:(id)a0 withModelFilePaths:(id)a1;

@end
