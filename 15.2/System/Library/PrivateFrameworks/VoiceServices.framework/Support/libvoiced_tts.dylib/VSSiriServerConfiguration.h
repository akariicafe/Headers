@class NSArray, CKKnowledgeStore;

@interface VSSiriServerConfiguration : NSObject

@property (retain, nonatomic) CKKnowledgeStore *knowledgeStore;
@property (readonly, nonatomic) BOOL shouldDelayVoiceUpdate;
@property (readonly, nonatomic) NSArray *allowedAppID;

+ (id)defaultConfig;

- (double)deviceWaitTimeForAppId:(id)a0;
- (double)timeoutForAppId:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)configForAppId:(id)a0 key:(id)a1;
- (id)experimentIdentifier;
- (id)dictForKey:(id)a0;

@end
