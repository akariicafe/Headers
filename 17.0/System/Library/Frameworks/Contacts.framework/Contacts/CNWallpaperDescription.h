@class NSString;

@interface CNWallpaperDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;

- (id)CNValueForContact:(id)a0;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (BOOL)abPropertyID:(int *)a0;
- (Class)valueClass;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (id)init;
- (id)CNValueFromABValue:(void *)a0;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (void *)ABValueFromCNValue:(id)a0;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (id)CNValueFromABBytes:(char *)a0 length:(unsigned long long)a1;

@end
