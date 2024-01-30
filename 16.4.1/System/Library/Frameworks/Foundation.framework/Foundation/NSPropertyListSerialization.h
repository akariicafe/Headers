@interface NSPropertyListSerialization : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)dataWithPropertyList:(id)a0 format:(unsigned long long)a1 options:(unsigned long long)a2 error:(out id *)a3;
+ (id)dataFromPropertyList:(id)a0 format:(unsigned long long)a1 errorDescription:(out id *)a2;
+ (BOOL)propertyList:(id)a0 isValidForFormat:(unsigned long long)a1;
+ (id)propertyListFromData:(id)a0 mutabilityOption:(unsigned long long)a1 format:(unsigned long long *)a2 errorDescription:(out id *)a3;
+ (id)propertyListWithData:(id)a0 options:(unsigned long long)a1 format:(unsigned long long *)a2 error:(out id *)a3;
+ (id)propertyListWithStream:(id)a0 options:(unsigned long long)a1 format:(unsigned long long *)a2 error:(out id *)a3;
+ (long long)writePropertyList:(id)a0 toStream:(id)a1 format:(unsigned long long)a2 options:(unsigned long long)a3 error:(out id *)a4;

- (id)init;

@end
