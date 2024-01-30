@class NSDictionary, _PASNotificationToken;

@interface SGStructuredEventExtractionModel : SGExtractionModel {
    _PASNotificationToken *_assetUpdateToken;
    NSDictionary *_inputMapping;
    NSDictionary *_outputMapping;
    NSDictionary *_supportedProviders;
    NSDictionary *_engineConfig;
}

+ (id)sharedInstance;
+ (id)inputFromTaggedCharacterRanges:(id)a0 usingInputMapping:(id)a1 forModel:(id)a2;

- (void).cxx_destruct;
- (id)loadModel;
- (id)_init;
- (void)updateAll;
- (id)modelInferences:(id)a0;
- (id)supportedProviders;
- (BOOL)isSenderSupportedForExtraction:(id)a0;
- (BOOL)isSenderSupportedForShadowExtraction:(id)a0;
- (id)engineConfig;
- (id)inputMapping;
- (id)outputMapping;
- (unsigned long long)maxMergeDistanceForSection:(id)a0 label:(id)a1;
- (id)gazetteer;

@end
