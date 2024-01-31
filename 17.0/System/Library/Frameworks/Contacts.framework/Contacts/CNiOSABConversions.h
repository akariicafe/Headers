@interface CNiOSABConversions : NSObject

+ (void)initialize;
+ (id)os_log;
+ (id)arrayByMappingTransform:(id /* block */)a0 onCFArray:(struct __CFArray { } *)a1;
+ (id)contactFromABPerson:(void *)a0 uniqueKeysToConvert:(id)a1 mutable:(BOOL)a2;
+ (id)dataFromABBytes:(char *)a0 length:(unsigned long long)a1;
+ (id)dateFromABBytes:(char *)a0 length:(unsigned long long)a1;
+ (id)numberFromIntegerABBytes:(char *)a0 length:(unsigned long long)a1;
+ (id)stringFromABBytes:(char *)a0 length:(unsigned long long)a1;
+ (void)updateContact:(id)a0 fromABPerson:(void *)a1 keysToConvert:(id)a2 availableKeyDescriptor:(id *)a3;

@end
