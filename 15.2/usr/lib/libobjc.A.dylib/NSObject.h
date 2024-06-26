@class NSString;

@interface NSObject <NSObject> {
    Class isa;
}

@property (class, readonly) BOOL accessInstanceVariablesDirectly;

@property void *observationInfo;
@property (readonly) Class classForKeyedArchiver;
@property (readonly, retain) id autoContentAccessingProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setVersion:(long long)a0;
+ (long long)version;
+ (BOOL)instancesImplementSelector:(SEL)a0;
+ (BOOL)implementsSelector:(SEL)a0;
+ (void)load;
+ (id)_createMutableOrderedSetValueGetterWithContainerClassID:(id)a0 key:(id)a1;
+ (void)cancelPreviousPerformRequestsWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
+ (id)_createMutableSetValueGetterWithContainerClassID:(id)a0 key:(id)a1;
+ (id)_createValuePrimitiveGetterWithContainerClassID:(id)a0 key:(id)a1;
+ (id)_createValuePrimitiveSetterWithContainerClassID:(id)a0 key:(id)a1;
+ (id)_createMutableArrayValueGetterWithContainerClassID:(id)a0 key:(id)a1;
+ (id)_createOtherValueGetterWithContainerClassID:(id)a0 key:(id)a1;
+ (id)_createOtherValueSetterWithContainerClassID:(id)a0 key:(id)a1;
+ (void)setKeys:(id)a0 triggerChangeNotificationsForDependentKey:(id)a1;
+ (id)classFallbacksForKeyedArchiver;
+ (void)cancelPreviousPerformRequestsWithTarget:(id)a0;
+ (id)_createValueGetterWithContainerClassID:(id)a0 key:(id)a1;
+ (id)_createValueSetterWithContainerClassID:(id)a0 key:(id)a1;
+ (BOOL)_shouldAddObservationForwardersForKey:(id)a0;
+ (id)_keysForValuesAffectingValueForKey:(id)a0;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (Class)classForKeyedUnarchiver;
+ (id)replacementObjectForPortCoder:(id)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)_copyDescription;
+ (void)doesNotRecognizeSelector:(SEL)a0;
+ (id)__allocWithZone_OA:(struct _NSZone { } *)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (id)methodSignatureForSelector:(SEL)a0;
+ (id)description;
+ (id)init;
+ (void)load;
+ (void)dealloc;
+ (id)SFSQLiteClassName;
+ (id)self;
+ (id)performSelector:(SEL)a0;
+ (void)initialize;
+ (BOOL)isFault;
+ (void)doesNotRecognizeSelector:(SEL)a0;
+ (id)performSelector:(SEL)a0 withObject:(id)a1;
+ (id)performSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (BOOL)isSubclassOfClass:(Class)a0;
+ (BOOL)allowsWeakReference;
+ (BOOL)isKindOfClass:(Class)a0;
+ (id)forwardingTargetForSelector:(SEL)a0;
+ (BOOL)resolveInstanceMethod:(SEL)a0;
+ (id)new;
+ (unsigned long long)retainCount;
+ (struct _NSZone { } *)zone;
+ (BOOL)retainWeakReference;
+ (id)methodSignatureForSelector:(SEL)a0;
+ (Class)superclass;
+ (id)mutableCopy;
+ (BOOL)isMemberOfClass:(Class)a0;
+ (void /* function */ *)instanceMethodForSelector:(SEL)a0;
+ (id)alloc;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
+ (id)retain;
+ (id)description;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)autorelease;
+ (BOOL)isProxy;
+ (BOOL)_isDeallocating;
+ (BOOL)isEqual:(id)a0;
+ (BOOL)isAncestorOfObject:(id)a0;
+ (id)init;
+ (void)forwardInvocation:(id)a0;
+ (id)copyWithZone:(struct _NSZone { } *)a0;
+ (BOOL)resolveClassMethod:(SEL)a0;
+ (Class)class;
+ (BOOL)conformsToProtocol:(id)a0;
+ (id)copy;
+ (unsigned long long)hash;
+ (void)dealloc;
+ (void /* function */ *)methodForSelector:(SEL)a0;
+ (BOOL)_tryRetain;
+ (oneway void)release;
+ (id)debugDescription;
+ (BOOL)respondsToSelector:(SEL)a0;

- (id)awakeAfterUsingCoder:(id)a0;
- (BOOL)_allowsDirectEncoding;
- (id)replacementObjectForCoder:(id)a0;
- (BOOL)implementsSelector:(SEL)a0;
- (Class)classForCoder;
- (id)valueForUndefinedKey:(id)a0;
- (BOOL)_isKVOA;
- (void)willChangeValueForKey:(id)a0;
- (void)_didChangeValuesForKeys:(id)a0;
- (void)_willChangeValuesForKeys:(id)a0;
- (void)_changeValueForKeys:(id *)a0 count:(unsigned long long)a1 maybeOldValuesDict:(id)a2 maybeNewValuesDict:(id)a3 usingBlock:(id /* block */)a4;
- (void)performSelectorOnMainThread:(SEL)a0 withObject:(id)a1 waitUntilDone:(BOOL)a2 modes:(id)a3;
- (void)performSelector:(SEL)a0 onThread:(id)a1 withObject:(id)a2 waitUntilDone:(BOOL)a3 modes:(id)a4;
- (id)valueForKey:(id)a0;
- (void)performSelectorOnMainThread:(SEL)a0 withObject:(id)a1 waitUntilDone:(BOOL)a2;
- (void)willChangeValueForKey:(id)a0 withSetMutation:(unsigned long long)a1 usingObjects:(id)a2;
- (void)didChangeValueForKey:(id)a0 withSetMutation:(unsigned long long)a1 usingObjects:(id)a2;
- (id)_pendingChangeNotificationsArrayForKey:(id)a0 create:(BOOL)a1;
- (void)performSelector:(SEL)a0 onThread:(id)a1 withObject:(id)a2 waitUntilDone:(BOOL)a3;
- (void)performSelector:(SEL)a0 withObject:(id)a1 afterDelay:(double)a2 inModes:(id)a3;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)dictionaryWithValuesForKeys:(id)a0;
- (void)removeObservation:(id)a0;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)removeObservation:(id)a0 forObservableKeyPath:(id)a1;
- (void)_addObserver:(id)a0 forProperty:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)performSelectorInBackground:(SEL)a0 withObject:(id)a1;
- (void)_receiveBox:(id)a0;
- (void)setValuesForKeysWithDictionary:(id)a0;
- (id)addObserver:(id)a0;
- (void)setObservation:(id)a0 forObservingKeyPath:(id)a1;
- (void)_changeValueForKey:(id)a0 key:(id)a1 key:(id)a2 usingBlock:(id /* block */)a3;
- (void)willChange:(unsigned long long)a0 valuesAtIndexes:(id)a1 forKey:(id)a2;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (void)_notifyObserversForKeyPath:(id)a0 change:(id)a1;
- (BOOL)validateValue:(inout id *)a0 forKeyPath:(id)a1 error:(out id *)a2;
- (void)finishObserving;
- (void)performSelector:(SEL)a0 withObject:(id)a1 afterDelay:(double)a2;
- (void)receiveObservedValue:(id)a0;
- (id)mutableOrderedSetValueForKeyPath:(id)a0;
- (id)addObserver:(id)a0 forObservableKeyPath:(id)a1;
- (void)performSelector:(SEL)a0 object:(id)a1 afterDelay:(double)a2;
- (void)didChange:(unsigned long long)a0 valuesAtIndexes:(id)a1 forKey:(id)a2;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)mutableSetValueForKeyPath:(id)a0;
- (BOOL)_isToManyChangeInformation;
- (BOOL)_overrideUseFastBlockObservers;
- (id)addObservationTransformer:(id /* block */)a0;
- (Class)classForArchiver;
- (void)_changeValueForKey:(id)a0 usingBlock:(id /* block */)a1;
- (void)setNilValueForKey:(id)a0;
- (id)addObserverBlock:(id /* block */)a0;
- (id *)_observerStorage;
- (id)mutableArrayValueForKey:(id)a0;
- (id)replacementObjectForArchiver:(id)a0;
- (void)_didEndKeyValueObserving;
- (id)_implicitObservationInfo;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (void)_destroyObserverList;
- (id)addChainedObservers:(id)a0;
- (void)receiveObservedError:(id)a0;
- (id)mutableOrderedSetValueForKey:(id)a0;
- (id)mutableArrayValueForKeyPath:(id)a0;
- (id)mutableSetValueForKey:(id)a0;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (BOOL)validateValue:(inout id *)a0 forKey:(id)a1 error:(out id *)a2;
- (void)_willBeginKeyValueObserving;
- (void)_removeObserver:(id)a0 forProperty:(id)a1;
- (id)replacementObjectForPortCoder:(id)a0;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)a0 toValuesForKeys:(id)a1;
- (Class)classForPortCoder;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)didChangeValueForKey:(id)a0;
- (id)valueForKeyPath:(id)a0;
- (void *)_observerStorageOfSize:(unsigned long long)a0;
- (BOOL)isNSDictionary__;
- (BOOL)isNSCFConstantString__;
- (BOOL)isNSObject__;
- (BOOL)isNSDate__;
- (BOOL)isNSString__;
- (BOOL)isNSTimeZone__;
- (BOOL)isNSValue__;
- (unsigned long long)_cfTypeID;
- (BOOL)isNSOrderedSet__;
- (BOOL)isNSArray__;
- (BOOL)isNSNumber__;
- (BOOL)isNSData__;
- (BOOL)isNSSet__;
- (id)__retain_OA;
- (oneway void)__release_OA;
- (BOOL)___tryRetain_OA;
- (id)_copyDescription;
- (void)__dealloc_zombie;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (id)__autorelease_OA;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)self;
- (id)performSelector:(SEL)a0;
- (BOOL)isFault;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (id)performSelector:(SEL)a0 withObject:(id)a1;
- (id)performSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
- (BOOL)allowsWeakReference;
- (BOOL)isKindOfClass:(Class)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned long long)retainCount;
- (struct _NSZone { } *)zone;
- (BOOL)retainWeakReference;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)mutableCopy;
- (BOOL)isMemberOfClass:(Class)a0;
- (void)finalize;
- (id)retain;
- (id)description;
- (id)autorelease;
- (BOOL)isProxy;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)forwardInvocation:(id)a0;
- (Class)class;
- (BOOL)conformsToProtocol:(id)a0;
- (id)copy;
- (void)dealloc;
- (void /* function */ *)methodForSelector:(SEL)a0;
- (BOOL)_tryRetain;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)a0;

@end
