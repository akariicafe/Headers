@class _TtC13CDMFoundation23CDMNLv4OverrideDatabase;

@interface CDMOverridesProtoService : CDMDAGBaseService

@property (readonly, nonatomic) _TtC13CDMFoundation23CDMNLv4OverrideDatabase *store;

+ (BOOL)isEnabled;
+ (BOOL)isAssetRequired;
+ (id)getAssetFolderNamesByTrialFactorNames;
+ (id)pathToOverridesFileWithLanguageCode:(id)a0 bundle:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)handle:(id)a0;
- (id)setup:(id)a0;
- (id)setupFailedFor:(id)a0;
- (id)createSetupErrorCmd:(id)a0;
- (id)handleRequestCommandTypeNames;
- (id)matchOverride:(id)a0 shouldAppend:(BOOL *)a1;
- (id)setupSucceeded;
- (id)store:(id)a0;

@end
