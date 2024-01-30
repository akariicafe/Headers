@interface CFPrefsSuiteSearchListSource : CFPrefsSearchListSource

- (void)handleChangeNotificationForDomainIdentifier:(struct __CFString { } *)a0 isRemote:(BOOL)a1;
- (void)deferredNotifyCausedByLocalWriteOfChangesToKey:(struct __CFString { } *)a0 fromValue:(void *)a1 toValue:(void *)a2;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)a0 toValuesForKeys:(id)a1;
- (void)deferredNotifyCausedByLoadingOfChangesFromDictionary:(struct __CFDictionary { } *)a0 toDictionary:(struct __CFDictionary { } *)a1;

@end
