@class SKUIViewElement, NSString;

@interface SKUIPageComponent : NSObject <SSMetricsEventFieldProvider>

@property (nonatomic, setter=_setMetricsLocationPosition:) long long metricsLocationPosition;
@property (readonly, nonatomic) SKUIViewElement *viewElement;
@property (readonly, nonatomic) long long componentType;
@property (readonly, nonatomic, getter=isMissingItemData) BOOL missingItemData;
@property (readonly, nonatomic) NSString *metricsElementName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)valueForMetricsField:(id)a0;
- (void)_enumerateMissingItemIdentifiersFromBricks:(id)a0 startIndex:(long long)a1 usingBlock:(id /* block */)a2;
- (void)_enumerateMissingItemIdentifiersFromLinks:(id)a0 startIndex:(long long)a1 usingBlock:(id /* block */)a2;
- (void)_enumerateMissingItemIdentifiersFromLockups:(id)a0 startIndex:(long long)a1 usingBlock:(id /* block */)a2;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithCustomPageContext:(id)a0;
- (id)initWithFeaturedContentContext:(id)a0 kind:(long long)a1;
- (id)initWithViewElement:(id)a0;

@end
