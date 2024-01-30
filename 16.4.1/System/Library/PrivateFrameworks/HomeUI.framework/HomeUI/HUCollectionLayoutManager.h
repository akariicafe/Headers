@class UIListContentConfiguration;

@interface HUCollectionLayoutManager : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ layoutOptions;
}

@property (class, nonatomic, readonly) UIListContentConfiguration *defaultProminentInsetGroupedHeader;

+ (struct HUGridSize { long long x0; long long x1; })gridSizeForItem:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)buildAdaptiveTileSectionFor:(id)a0 layoutEnvironment:(id)a1;
- (void)registerSectionDecorationViewsWithLayout:(id)a0;

@end
