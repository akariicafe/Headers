@interface OADCountedGraphicFeature : NSObject {
    id mFeature;
}

@property (nonatomic) unsigned long long usageCount;

- (void).cxx_destruct;
- (void)dealloc;
- (id)feature;
- (id)initWithFeature:(id)a0;
- (void)incrementUsageCount;
- (long long)compareUsageCount:(id)a0;

@end
