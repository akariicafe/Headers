@class NSArray, CKKnowledgeStore;

@interface VSSiriServerConfiguration : NSObject

@property (retain, nonatomic) CKKnowledgeStore *knowledgeStore;
@property (readonly, nonatomic) BOOL disableOsprey;
@property (readonly, nonatomic) BOOL shouldDelayVoiceUpdate;
@property (readonly, nonatomic) NSArray *whitelistedAppId;

+ (id)defaultConfig;

- (id)init;
- (void).cxx_destruct;
- (id)experimentIdentifier;
- (double)deviceWaitTimeForAppId:(id)a0;
- (double)timeoutForAppId:(id)a0;
- (id)dictForKey:(id)a0;
- (id)configForAppId:(id)a0 key:(id)a1;

@end
