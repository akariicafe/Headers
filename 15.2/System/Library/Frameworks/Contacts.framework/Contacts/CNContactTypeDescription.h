@class NSString;

@interface CNContactTypeDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void *)ABValueFromCNValue:(id)a0;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (Class)valueClass;
- (id)nilValue;
- (id)CNValueForContact:(id)a0;
- (id)CNValueFromABValue:(void *)a0;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (id)init;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (id)CNValueFromABBytes:(char *)a0 length:(unsigned long long)a1;
- (BOOL)abPropertyID:(int *)a0;
- (BOOL)isValidValue:(id)a0 error:(id *)a1;

@end
