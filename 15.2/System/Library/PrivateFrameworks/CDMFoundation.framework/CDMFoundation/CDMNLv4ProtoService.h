@class SNLPNaturalLanguageParser;

@interface CDMNLv4ProtoService : CDMDAGBaseService {
    SNLPNaturalLanguageParser *_parser;
}

+ (id)assetFolderName;
+ (id)trialFactorName;
+ (id)getParserEnum;

- (id)handle:(id)a0;
- (void).cxx_destruct;
- (id)handleRequestCommandTypeNames;
- (id)setup:(id)a0;
- (id)assetsPathURLForModelBundle:(id)a0;
- (id)parserFromAssetDirectory:(id)a0 error:(id *)a1;
- (id)doNLv4Inference:(id)a0 outError:(id *)a1;
- (id)buildEmptyNLv4ResponseCommand:(id)a0;
- (id)buildNLv4ResponseCommand:(id)a0 requestId:(id)a1;

@end
