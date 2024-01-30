@class NSArray, MRRMultimodalMentionResolver;

@interface CDMMentionResolverService : CDMDAGBaseService

@property (retain, nonatomic) MRRMultimodalMentionResolver *mentionResolver;
@property (readonly, nonatomic) NSArray *overrideMentionsForReplay;

+ (BOOL)isEnabled;
+ (BOOL)isAssetRequired;
+ (id)getAssetFolderNamesByTrialFactorNames;

- (void).cxx_destruct;
- (id)handle:(id)a0;
- (id)setup:(id)a0;
- (id)getPredictor:(id)a0 forLocale:(id)a1 status:(id *)a2;
- (id)handleRequestCommandTypeNames;
- (id)predictWithInput:(id)a0 forLocale:(id)a1 status:(id *)a2;

@end
