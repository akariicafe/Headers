@class NSString;

@interface CNCreationDateDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCNValue:(id)a0 onContact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (Class)valueClass;
- (id)CNValueForContact:(id)a0;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (id)init;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (id)CNValueFromABBytes:(char *)a0 length:(unsigned long long)a1;
- (BOOL)setABValue:(void *)a0 onABPerson:(void *)a1 error:(struct __CFError **)a2;
- (BOOL)abPropertyID:(int *)a0;

@end
