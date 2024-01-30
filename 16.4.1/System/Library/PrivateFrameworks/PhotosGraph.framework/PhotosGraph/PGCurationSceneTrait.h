@class NSSet, CLSSceneConfidenceThresholdHelper;

@interface PGCurationSceneTrait : PGCurationTrait {
    CLSSceneConfidenceThresholdHelper *_helper;
}

@property (readonly) NSSet *sceneNames;
@property (nonatomic) unsigned long long targetNumberOfMatches;

- (BOOL)isActive;
- (void).cxx_destruct;
- (id)confidenceThresholdBySceneIdentifierWithCurationModel:(id)a0;
- (id)initWithSceneNames:(id)a0;

@end
