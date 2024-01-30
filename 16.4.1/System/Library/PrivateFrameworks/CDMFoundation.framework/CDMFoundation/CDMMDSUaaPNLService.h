@interface CDMMDSUaaPNLService : CDMUaaPNLProtoService

+ (BOOL)isEnabled;
+ (BOOL)isAssetRequired;
+ (id)getAssetFolderNamesByTrialFactorNames;

- (id)setup:(id)a0;
- (int)getOverrideNamespace;

@end
