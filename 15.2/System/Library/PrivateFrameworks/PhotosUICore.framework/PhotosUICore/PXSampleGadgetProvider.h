@interface PXSampleGadgetProvider : PXGadgetProvider

@property (nonatomic) unsigned long long sampleGadgetType;
@property (nonatomic) double minimumHeight;
@property (nonatomic) BOOL hasLoadedData;

+ (id)defaultSampleGadgetProviders;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)initWithSampleGadgetType:(unsigned long long)a0 minimumHeight:(double)a1;
- (id)initWithSampleGadgetType:(unsigned long long)a0;

@end
