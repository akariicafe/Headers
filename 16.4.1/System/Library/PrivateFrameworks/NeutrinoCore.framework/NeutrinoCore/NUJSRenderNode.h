@class NUJSImageProperties, NUJSImageGeometry, NURenderNode, NUJSVideoProperties;

@interface NUJSRenderNode : NUJSProxy <NUJSRenderNodeExport>

@property (readonly) NURenderNode *node;
@property (readonly) NUJSImageGeometry *geometry;
@property (readonly) NUJSImageProperties *imageProperties;
@property (readonly) NUJSVideoProperties *videoProperties;

- (id)initWithNode:(id)a0 context:(id)a1;
- (id)initWithRepresentedObject:(id)a0 context:(id)a1;

@end
