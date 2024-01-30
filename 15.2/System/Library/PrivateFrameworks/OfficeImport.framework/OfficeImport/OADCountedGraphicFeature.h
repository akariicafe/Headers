@interface OADCountedGraphicFeature : NSObject {
    id mFeature;
}

@property (nonatomic) unsigned long long usageCount;

- (id)initWithFeature:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)feature;
- (void)incrementUsageCount;
- (long long)compareUsageCount:(id)a0;

@end
