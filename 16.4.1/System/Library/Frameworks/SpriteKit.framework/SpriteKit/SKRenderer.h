@class SKTransition, NSMapTable, NSMutableDictionary, SKScene;

@interface SKRenderer : NSObject {
    BOOL _needsInitialUpdate;
    BOOL _disableInput;
    BOOL _hasRenderedForCurrentUpdate;
    double _currentTime;
    double _previousTime;
    void *_skcRenderer;
    SKScene *_nextScene;
    SKTransition *_transition;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _renderBounds;
    NSMapTable *_touchMap;
    NSMutableDictionary *_renderOptions;
}

@property (retain, nonatomic) SKScene *scene;
@property (nonatomic) BOOL ignoresSiblingOrder;
@property (nonatomic) BOOL shouldCullNonVisibleNodes;
@property (nonatomic) BOOL showsDrawCount;
@property (nonatomic) BOOL showsNodeCount;
@property (nonatomic) BOOL showsQuadCount;
@property (nonatomic) BOOL showsPhysics;
@property (nonatomic) BOOL showsFields;

+ (id)rendererWithDevice:(id)a0;

- (void)_initialize;
- (void)dealloc;
- (void)_update:(double)a0;
- (void).cxx_destruct;
- (void)updateAtTime:(double)a0;
- (id)_getOptions;
- (void)_notifyWillRenderContent;
- (id)initWithSKCRenderer:(void *)a0;
- (void)renderWithViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 commandBuffer:(id)a1 renderPassDescriptor:(id)a2;
- (void)renderWithViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 renderCommandEncoder:(id)a1 renderPassDescriptor:(id)a2 commandQueue:(id)a3;

@end
