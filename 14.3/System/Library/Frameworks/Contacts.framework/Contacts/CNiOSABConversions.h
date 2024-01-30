@interface CNiOSABConversions : NSObject

+ (void)initialize;
+ (id)numberFromIntegerABBytes:(char *)a0 length:(unsigned long long)a1;
+ (id)arrayByMappingTransform:(id /* block */)a0 onCFArray:(struct __CFArray { } *)a1;
+ (id)stringFromABBytes:(char *)a0 length:(unsigned long long)a1;
+ (id)dataFromABBytes:(char *)a0 length:(unsigned long long)a1;
+ (id)os_log;
+ (id)contactFromABPerson:(void *)a0 uniqueKeysToConvert:(id)a1 mutable:(BOOL)a2;
+ (id)dateFromABBytes:(char *)a0 length:(unsigned long long)a1;
+ (void)updateContact:(id)a0 fromABPerson:(void *)a1 keysToConvert:(id)a2 availableKeyDescriptor:(id *)a3;

@end
