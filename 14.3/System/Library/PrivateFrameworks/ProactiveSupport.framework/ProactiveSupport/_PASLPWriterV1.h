@interface _PASLPWriterV1 : NSObject

+ (BOOL)_visitObject:(id)a0 handleBoolean:(id /* block */)a1 handleInt64:(id /* block */)a2 handleFloat64:(id /* block */)a3 handleTimeInterval:(id /* block */)a4 handleData:(id /* block */)a5 handleString:(id /* block */)a6 handleDict:(id /* block */)a7 handleArray:(id /* block */)a8 handleOther:(id /* block */)a9;
+ (BOOL)_scanPlist:(id)a0 recursionDepth:(unsigned long long)a1 sizeUpperBound:(unsigned long long *)a2 allDictionaryKeys:(id)a3 error:(id *)a4;
+ (unsigned int)_valueWordForObjectGraph:(id)a0 allocContext:(struct { void *x0; void *x1; struct __CFSet *x2; void *x3; struct _PASLPObjectGraphStats *x4; } *)a1 recursionDepth:(unsigned long long)a2;
+ (void)_writePlist:(id)a0 allDictionaryKeys:(id)a1 toBuffer:(void *)a2 size:(unsigned long long)a3 actSize:(unsigned long long *)a4;
+ (id)_mappedDataWithPlist:(id)a0 fd:(int)a1 ofs:(long long)a2 error:(id *)a3;
+ (id)fileBackedDataWithPropertyList:(id)a0 writtenToPath:(id)a1 error:(id *)a2;
+ (id)dataWithPropertyList:(id)a0 error:(id *)a1;
+ (id)fileBackedDataWithPropertyList:(id)a0 appendedToFd:(int)a1 startOfs:(long long *)a2 error:(id *)a3;

- (id)init;

@end
