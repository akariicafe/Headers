@class NSString, NSKeyValueContainerClass;

@interface NSKeyValueProperty : NSObject <NSCopying> {
    NSKeyValueContainerClass *_containerClass;
    NSString *_keyPath;
}

- (Class)isaForAutonotifying;
- (id)_initWithContainerClass:(id)a0 keyPath:(id)a1 propertiesBeingInitialized:(struct __CFSet { } *)a2;
- (id)dependentValueKeyOrKeysIsASet:(BOOL *)a0;
- (void)object:(id)a0 withObservance:(id)a1 didChangeValueForKeyOrKeys:(id)a2 recurse:(BOOL)a3 forwardingValues:(struct { id x0; id x1; })a4;
- (BOOL)object:(id)a0 withObservance:(id)a1 willChangeValueForKeyOrKeys:(id)a2 recurse:(BOOL)a3 forwardingValues:(struct { id x0; id x1; } *)a4;
- (void)object:(id)a0 didAddObservance:(id)a1 recurse:(BOOL)a2;
- (id)restOfKeyPathIfContainedByValueForKeyPath:(id)a0;
- (void)object:(id)a0 didRemoveObservance:(id)a1 recurse:(BOOL)a2;
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyPath;
- (void)dealloc;
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)a0;
- (id)keyPathIfAffectedByValueForKey:(id)a0 exactMatch:(BOOL *)a1;

@end
