@class NSSet, UPModelBundle, UPSystemConfiguration;

@interface CDMUaaPNLService : CDMDAGBaseService {
    UPModelBundle *__coreModelBundle;
    NSSet *__appModelBundles;
    UPSystemConfiguration *__systemConfiguration;
}

+ (id)assetFolderName;
+ (id)loadModelBundle:(id)a0 modelConfiguration:(id)a1 error:(id *)a2;
+ (id)loadAppModelBundles:(id)a0 systemConfiguration:(id)a1;
+ (id)createErrorResponse:(id)a0 error:(id)a1;
+ (id)detectForegroundApp:(id)a0 locale:(id)a1;
+ (id)convertFromCDMTokens:(id)a0;
+ (id)convertEmbeddings:(id)a0 forTokens:(id)a1;
+ (double)getBestAvailableProbabilityFromResultCandidate:(id)a0;

- (BOOL)isEnabled;
- (id)handle:(id)a0;
- (void).cxx_destruct;
- (id)handleRequestCommandTypeNames;
- (id)setup:(id)a0;

@end
