@class NSString, SFSpeechSynthesisVoice;

@interface SFSpeechSynthesisRequest : NSObject

@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *voiceName;
@property (copy, nonatomic) NSString *clientBundleIdentifier;
@property (copy, nonatomic) NSString *requestIdentifer;
@property (weak, nonatomic) SFSpeechSynthesisVoice *voice;
@property (nonatomic) BOOL useCache;
@property (nonatomic) BOOL returnFrontEndFeature;
@property (nonatomic) long long phoneSetType;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isPrivate;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long solutionType;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
