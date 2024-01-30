@class SKUITracklistViewElement;

@interface SKUITracklistPageComponent : SKUIPageComponent

@property (readonly, nonatomic) SKUITracklistViewElement *viewElement;

- (long long)componentType;
- (id)initWithViewElement:(id)a0;

@end
