@class NSString;

@interface _UISceneLayerTargetWithContext : NSObject <UISceneLayerTarget> {
    id _context;
    unsigned long long _equalityType;
    id /* block */ _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (BOOL)matchesLayer:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)initWithContext:(id)a0 equalityType:(unsigned long long)a1 matchingBlock:(id /* block */)a2;

@end
