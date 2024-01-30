@class _TtC13CDMFoundation23CDMNLv4OverrideDatabase;

@interface CDMOverridesProtoService : CDMDAGBaseService {
    _TtC13CDMFoundation23CDMNLv4OverrideDatabase *database;
}

+ (id)assetFolderName;
+ (id)trialFactorName;
+ (id)pathToOverridesFileWithLanguageCode:(id)a0 bundle:(id)a1;

- (BOOL)isEnabled;
- (id)handle:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAssetRequired;
- (id)matchOverride:(id)a0;
- (id)handleRequestCommandTypeNames;
- (id)setup:(id)a0;

@end
