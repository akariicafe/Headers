@class NSArray;

@interface SKUIGalleryPageComponent : SKUIPageComponent

@property (readonly, nonatomic) NSArray *childComponents;
@property (nonatomic) double cycleInterval;
@property (nonatomic) BOOL hidesPageIndicator;

- (long long)componentType;
- (void).cxx_destruct;
- (id)initWithCustomPageContext:(id)a0;
- (id)metricsElementName;

@end
