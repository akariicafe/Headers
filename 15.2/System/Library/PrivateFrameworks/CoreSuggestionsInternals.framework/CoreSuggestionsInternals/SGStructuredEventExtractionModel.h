@class NSDictionary, _PASNotificationToken;

@interface SGStructuredEventExtractionModel : SGExtractionModel {
    _PASNotificationToken *_assetUpdateToken;
    NSDictionary *_inputMapping;
    NSDictionary *_outputMapping;
    NSDictionary *_supportedProviders;
    NSDictionary *_engineConfig;
}

+ (id)sharedInstance;
+ (id)inputFromTaggedCharacterRanges:(id)a0 usingInputMapping:(id)a1 forModel:(id)a2 pflTraining:(BOOL)a3 hasEvent:(BOOL)a4;

- (void).cxx_destruct;
- (id)loadModel;
- (id)_init;
- (void)updateAll;
- (id)modelInferences:(id)a0;
- (id)modelInferences:(id)a0 pflTraining:(BOOL)a1 hasEvent:(BOOL)a2;
- (id)supportedProviders;
- (BOOL)isSenderSupportedForExtraction:(id)a0;
- (BOOL)isSenderSupportedForShadowExtraction:(id)a0;
- (BOOL)isSenderSupportedForMLDefaultExtraction:(id)a0;
- (BOOL)isSenderSupportedForPFLTraining:(id)a0;
- (id)engineConfig;
- (id)inputMapping;
- (id)outputMapping;
- (unsigned long long)maxMergeDistanceForSection:(id)a0 label:(id)a1;
- (unsigned long long)stripRepeatedContentForSectionLength:(id)a0 label:(id)a1;
- (unsigned long long)addressComponentThreshold;
- (id)gazetteer;

@end
