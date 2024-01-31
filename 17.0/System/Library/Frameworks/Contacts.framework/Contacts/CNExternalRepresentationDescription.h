@class NSString;

@interface CNExternalRepresentationDescription : CNPropertyDescription <CNAbstractPropertyDescription>

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
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (void)resetGuardianManagedValueOnContact:(id)a0;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (unsigned int)abPropertyType;
- (id)CNValueFromABBytes:(char *)a0 length:(unsigned long long)a1;

@end
