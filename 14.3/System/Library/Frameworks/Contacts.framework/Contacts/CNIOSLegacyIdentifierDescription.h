@class NSString;

@interface CNIOSLegacyIdentifierDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)valueClass;
- (id)init;
- (BOOL)setABValue:(void *)a0 onABPerson:(void *)a1 error:(struct __CFError **)a2;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (id)nilValue;
- (BOOL)isEqualIgnoringIdentifiersForContact:(id)a0 other:(id)a1;
- (void)resetGuardianManagedValueOnContact:(id)a0;
- (id)CNValueForContact:(id)a0;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (void *)ABValueForABPerson:(void *)a0;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (id)valueWithResetIdentifiers:(id)a0;

@end
