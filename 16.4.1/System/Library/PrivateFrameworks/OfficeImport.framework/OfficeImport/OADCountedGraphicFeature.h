@interface OADCountedGraphicFeature : NSObject {
    id mFeature;
}

@property (nonatomic) unsigned long long usageCount;

- (void)dealloc;
- (id)feature;
- (void).cxx_destruct;
- (id)initWithFeature:(id)a0;
- (void)incrementUsageCount;
- (long long)compareUsageCount:(id)a0;

@end
