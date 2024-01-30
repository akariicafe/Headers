@class NSSet;

@interface SBSceneBackgroundedStatusAssertion : NSObject {
    id /* block */ _invalidationHandler;
}

@property (readonly, copy, nonatomic) NSSet *scenes;

- (id)initWithScenes:(id)a0 invalidationHandler:(id /* block */)a1;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;

@end
