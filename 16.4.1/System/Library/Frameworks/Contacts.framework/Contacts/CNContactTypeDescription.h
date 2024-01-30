@class NSString;

@interface CNContactTypeDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (BOOL)abPropertyID:(int *)a0;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (id)CNValueForContact:(id)a0;
- (id)nilValue;
- (id)CNValueFromABBytes:(char *)a0 length:(unsigned long long)a1;
- (id)init;
- (Class)valueClass;
- (id)CNValueFromABValue:(void *)a0;
- (void *)ABValueFromCNValue:(id)a0;
- (BOOL)isValidValue:(id)a0 error:(id *)a1;

@end
