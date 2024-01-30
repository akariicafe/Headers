@interface GEOSignedResource : NSObject

+ (BOOL)_validateResource:(unsigned long long)a0 withData:(id)a1 data:(id *)a2 error:(id *)a3;
+ (BOOL)_validateResource:(unsigned long long)a0 atPath:(id)a1 data:(id *)a2 error:(id *)a3;
+ (id)validateResource:(unsigned long long)a0 withData:(id)a1;
+ (id)validateResource:(unsigned long long)a0 atPath:(id)a1;
+ (id)loadResource:(unsigned long long)a0 atPath:(id)a1 error:(id *)a2;

@end
