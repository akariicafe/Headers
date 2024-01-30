@class NSString, NSKeyValueContainerClass;

@interface NSKeyValueProperty : NSObject <NSCopying> {
    NSKeyValueContainerClass *_containerClass;
    NSString *_keyPath;
}

- (id)keyPath;
- (id)dependentValueKeyOrKeysIsASet:(BOOL *)a0;
- (Class)isaForAutonotifying;
- (void)object:(id)a0 didRemoveObservance:(id)a1 recurse:(BOOL)a2;
- (void)object:(id)a0 withObservance:(id)a1 didChangeValueForKeyOrKeys:(id)a2 recurse:(BOOL)a3 forwardingValues:(struct { id x0; id x1; })a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)object:(id)a0 didAddObservance:(id)a1 recurse:(BOOL)a2;
- (BOOL)object:(id)a0 withObservance:(id)a1 willChangeValueForKeyOrKeys:(id)a2 recurse:(BOOL)a3 forwardingValues:(struct { id x0; id x1; } *)a4;
- (void)dealloc;
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)a0;
- (id)restOfKeyPathIfContainedByValueForKeyPath:(id)a0;
- (id)_initWithContainerClass:(id)a0 keyPath:(id)a1 propertiesBeingInitialized:(struct __CFSet { } *)a2;
- (id)keyPathIfAffectedByValueForKey:(id)a0 exactMatch:(BOOL *)a1;
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)a0;

@end
