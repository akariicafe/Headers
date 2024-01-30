@class CAStateController, NSDictionary, NSString, CALayer;

@interface AVMicaPackage : NSObject <CAMLParserDelegate, CAStateControllerDelegate>

@property (class, readonly, nonatomic) NSDictionary *classSubstitions;

@property (readonly, nonatomic) CAStateController *stateController;
@property (nonatomic) struct CGSize { double width; double height; } unscaledSize;
@property (nonatomic) long long layoutDirection;
@property (retain, nonatomic) CALayer *rootLayer;
@property (readonly, copy, nonatomic) NSString *state;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) NSString *packageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)asynchronouslyPrepareMicaPackageWithName:(id)a0 layoutDirection:(long long)a1 completion:(id /* block */)a2;

- (void)_setState:(id)a0;
- (void).cxx_destruct;
- (Class)CAMLParser:(id)a0 didFailToFindClassWithName:(id)a1;
- (id)initWithPackageName:(id)a0 layoutDirection:(long long)a1;
- (void)setState:(id)a0 color:(struct CGColor { } *)a1;
- (void)removeCompositingFiltersWithName:(id)a0;
- (id)_recursivelyFindSublayerWithName:(id)a0 rootLayer:(id)a1;
- (void)_recursivelySetFillColor:(struct CGColor { } *)a0 rootLayer:(id)a1;
- (void)_recursivelyRemoveCompositingFiltersWithName:(id)a0 rootLayer:(id)a1;
- (void)transitionToStateWithName:(id)a0;
- (void)transitionToStateWithName:(id)a0 onLayer:(id)a1;
- (id)availableStates;
- (id)availableStatesOnLayer:(id)a0;
- (id)sublayerWithName:(id)a0;
- (void)_loadRootLayerIfNeeded;

@end
