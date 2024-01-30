@class NSString, NSKeyValueProperty;

@interface NSKeyValueComputedProperty : NSKeyValueProperty {
    NSString *_operationName;
    NSString *_operationArgumentKeyPath;
    NSKeyValueProperty *_operationArgumentProperty;
}

- (Class)_isaForAutonotifying;
- (void)object:(id)a0 didAddObservance:(id)a1 recurse:(BOOL)a2;
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)a0;
- (void)_givenPropertiesBeingInitialized:(struct __CFSet { } *)a0 getAffectingProperties:(id)a1;
- (id)_keyPathIfAffectedByValueForKey:(id)a0 exactMatch:(BOOL *)a1;
- (id)description;
- (BOOL)object:(id)a0 withObservance:(id)a1 willChangeValueForKeyOrKeys:(id)a2 recurse:(BOOL)a3 forwardingValues:(struct { id x0; id x1; } *)a4;
- (void)object:(id)a0 didRemoveObservance:(id)a1 recurse:(BOOL)a2;
- (void)_addDependentValueKey:(id)a0;
- (void)object:(id)a0 withObservance:(id)a1 didChangeValueForKeyOrKeys:(id)a2 recurse:(BOOL)a3 forwardingValues:(struct { id x0; id x1; })a4;
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)a0;
- (void)dealloc;
- (id)_initWithContainerClass:(id)a0 keyPath:(id)a1 propertiesBeingInitialized:(struct __CFSet { } *)a2;

@end
