@class NSMutableDictionary;

@interface SiriUIComponentConstraintFactory : NSObject {
    NSMutableDictionary *_layoutStyleToComponentLayoutMaps;
}

+ (id)sharedConstraintFactory;

- (id)init;
- (void).cxx_destruct;
- (id)topConstraintForView:(id)a0 inSuperview:(id)a1 templateComponent:(id)a2 layoutStyle:(long long)a3;
- (void)_addConstants:(id)a0 forLowerComponentStyle:(unsigned long long)a1 toMap:(id)a2;
- (id)_bestDistanceFromComponentType:(unsigned long long)a0 toComponentType:(unsigned long long)a1 layoutStyle:(long long)a2;
- (unsigned long long)_componentTypeForView:(id)a0 component:(id)a1;
- (id)_createMapForLayoutStyle:(long long)a0;
- (long long)_layoutAttributeForView:(id)a0 componentType:(unsigned long long)a1 isLower:(BOOL)a2;
- (void)_setupMaps;
- (id)bottomConstraintForView:(id)a0 fromLayoutGuide:(id)a1 templateComponent:(id)a2 layoutStyle:(long long)a3;
- (id)bottomConstraintForView:(id)a0 inSuperview:(id)a1 templateComponent:(id)a2 layoutStyle:(long long)a3;
- (id)topConstraintForView:(id)a0 fromLayoutGuide:(id)a1 templateComponent:(id)a2 layoutStyle:(long long)a3;
- (id)verticalConstraintFromUpperView:(id)a0 lowerView:(id)a1 upperTemplateComponent:(id)a2 lowerTemplateComponent:(id)a3 layoutStyle:(long long)a4;

@end
