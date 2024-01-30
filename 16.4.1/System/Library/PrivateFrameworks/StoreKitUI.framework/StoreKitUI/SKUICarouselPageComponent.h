@class NSArray, SKUICarouselViewElement, NSString;

@interface SKUICarouselPageComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {
    long long _missingItemCount;
}

@property (readonly, nonatomic) NSArray *carouselItems;
@property (readonly, nonatomic) SKUICarouselViewElement *viewElement;
@property (readonly, nonatomic) double cycleInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)componentType;
- (void).cxx_destruct;
- (id)valueForMetricsField:(id)a0;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithFeaturedContentContext:(id)a0 kind:(long long)a1;
- (id)initWithViewElement:(id)a0;
- (BOOL)isMissingItemData;
- (id)metricsElementName;
- (void)updateWithMissingItems:(id)a0;

@end
