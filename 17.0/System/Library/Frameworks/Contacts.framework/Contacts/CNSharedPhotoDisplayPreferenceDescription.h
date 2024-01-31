@class NSString;

@interface CNSharedPhotoDisplayPreferenceDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)CNValueForContact:(id)a0;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (BOOL)abPropertyID:(int *)a0;
- (Class)valueClass;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (id)init;
- (BOOL)setCNValue:(id)a0 onABPerson:(void *)a1 withDependentPropertiesContext:(id)a2 error:(id *)a3;
- (id)nilValue;
- (id)CNValueFromABValue:(void *)a0;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (id)CNValueFromABBytes:(char *)a0 length:(unsigned long long)a1;
- (long long)flagsWithFlags:(id)a0 displayPreference:(id)a1;
- (BOOL)isValidValue:(id)a0 error:(id *)a1;
- (id)sharedPhotoDisplayPreferenceFromFlags:(id)a0;

@end
