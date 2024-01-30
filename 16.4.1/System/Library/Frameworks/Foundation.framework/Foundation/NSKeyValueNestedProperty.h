@class NSString, NSKeyValueUnnestedProperty;

@interface NSKeyValueNestedProperty : NSKeyValueProperty {
    NSString *_relationshipKey;
    NSString *_keyPathFromRelatedObject;
    NSKeyValueUnnestedProperty *_relationshipProperty;
    NSString *_keyPathWithoutOperatorComponents;
    BOOL _isAllowedToResultInForwarding;
    id _dependentValueKeyOrKeys;
    BOOL _dependentValueKeyOrKeysIsASet;
}

- (id)dependentValueKeyOrKeysIsASet:(BOOL *)a0;
- (void)object:(id)a0 didRemoveObservance:(id)a1 recurse:(BOOL)a2;
- (void)object:(id)a0 withObservance:(id)a1 didChangeValueForKeyOrKeys:(id)a2 recurse:(BOOL)a3 forwardingValues:(struct { id x0; id x1; })a4;
- (void)_givenPropertiesBeingInitialized:(struct __CFSet { } *)a0 getAffectingProperties:(id)a1;
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)a0;
- (void)object:(id)a0 didAddObservance:(id)a1 recurse:(BOOL)a2;
- (BOOL)object:(id)a0 withObservance:(id)a1 willChangeValueForKeyOrKeys:(id)a2 recurse:(BOOL)a3 forwardingValues:(struct { id x0; id x1; } *)a4;
- (void)dealloc;
- (void)_addDependentValueKey:(id)a0;
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)a0;
- (id)_keyPathIfAffectedByValueForKey:(id)a0 exactMatch:(BOOL *)a1;
- (id)_initWithContainerClass:(id)a0 keyPath:(id)a1 firstDotIndex:(unsigned long long)a2 propertiesBeingInitialized:(struct __CFSet { } *)a3;
- (id)description;
- (Class)_isaForAutonotifying;

@end
