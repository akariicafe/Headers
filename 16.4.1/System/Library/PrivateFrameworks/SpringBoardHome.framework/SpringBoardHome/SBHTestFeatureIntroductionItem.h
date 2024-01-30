@interface SBHTestFeatureIntroductionItem : SBHFeatureIntroductionItem

@property (nonatomic) BOOL didSetupFeatureIntroduction;
@property (nonatomic) BOOL didDisplayFeatureIntroduction;

- (BOOL)shouldSetupFeatureIntroductionAtLocations:(unsigned long long)a0;
- (void)displayFeatureIntroductionAtLocations:(unsigned long long)a0 presentCompletion:(id /* block */)a1 dismissCompletion:(id /* block */)a2;
- (void)setupFeatureIntroductionAtLocations:(unsigned long long)a0;
- (BOOL)shouldDisplayFeatureIntroductionAtLocations:(unsigned long long)a0;
- (id)featureIntroductionIdentifier;

@end
