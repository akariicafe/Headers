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

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)initWithContext:(id)a0 equalityType:(unsigned long long)a1 matchingBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)matchesLayer:(id)a0;

@end
