@class NSMutableDictionary;

@interface _UIVisualStyleRegistry : NSObject {
    NSMutableDictionary *__classToVisualStyleClass;
}

@property (class, readonly, nonatomic) _UIVisualStyleRegistry *defaultRegistry;

+ (id)registryForTraitEnvironment:(id)a0;
+ (id)registryForIdiom:(long long)a0;

- (Class)visualStyleClassForView:(id)a0;
- (Class)visualStyleClassForStylableClass:(Class)a0;
- (id)init;
- (void).cxx_destruct;
- (void)registerVisualStyleClass:(Class)a0 forStylableClass:(Class)a1;

@end
