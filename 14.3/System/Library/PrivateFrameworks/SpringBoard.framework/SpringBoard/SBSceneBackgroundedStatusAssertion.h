@class NSSet;

@interface SBSceneBackgroundedStatusAssertion : NSObject {
    id /* block */ _invalidationHandler;
}

@property (readonly, copy, nonatomic) NSSet *scenes;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithScenes:(id)a0 invalidationHandler:(id /* block */)a1;
- (void)invalidate;

@end
