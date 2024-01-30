@class NSArray;

@interface _UIBarItemAppearance : _UIAppearance {
    NSArray *_blindViewAppearances;
}

+ (id)_appearanceForClass:(Class)a0 withContainerList:(id)a1;
+ (id)_rootAppearancesNode;

- (void)_handleSetterInvocation:(id)a0;
- (void)_handleGetterInvocation:(id)a0;
- (void)dealloc;

@end
