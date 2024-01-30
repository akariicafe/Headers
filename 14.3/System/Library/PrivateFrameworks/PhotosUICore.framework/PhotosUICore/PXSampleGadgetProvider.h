@interface PXSampleGadgetProvider : PXGadgetProvider

@property (nonatomic) unsigned long long sampleGadgetType;
@property (nonatomic) double minimumHeight;
@property (nonatomic) BOOL hasLoadedData;

+ (id)defaultSampleGadgetProviders;

- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)init;
- (id)initWithIdentifier:(id)a0;
- (id)initWithSampleGadgetType:(unsigned long long)a0;
- (id)initWithSampleGadgetType:(unsigned long long)a0 minimumHeight:(double)a1;
- (void)loadDataForGadgets;

@end
