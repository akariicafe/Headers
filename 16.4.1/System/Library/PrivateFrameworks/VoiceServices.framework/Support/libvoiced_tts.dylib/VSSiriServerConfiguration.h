@class NSArray, CKKnowledgeStore;

@interface VSSiriServerConfiguration : NSObject

@property (retain, nonatomic) CKKnowledgeStore *knowledgeStore;
@property (readonly, nonatomic) BOOL shouldDelayVoiceUpdate;
@property (readonly, nonatomic) NSArray *allowedAppID;

+ (id)defaultConfig;

- (id)init;
- (void).cxx_destruct;
- (id)experimentIdentifier;
- (id)configForAppId:(id)a0 key:(id)a1;
- (double)deviceWaitTimeForAppId:(id)a0;
- (id)dictForKey:(id)a0;
- (double)timeoutForAppId:(id)a0;

@end
