@interface GEOSignedResource : NSObject

+ (BOOL)_validateResource:(unsigned long long)a0 atPath:(id)a1 data:(id *)a2 error:(id *)a3;
+ (BOOL)_validateResource:(unsigned long long)a0 withData:(id)a1 data:(id *)a2 error:(id *)a3;
+ (id)loadResource:(unsigned long long)a0 atPath:(id)a1 error:(id *)a2;
+ (id)loadResourceAtPath:(id)a0 error:(id *)a1;
+ (unsigned long long)typeForResourceByFileName:(id)a0;
+ (id)validateResource:(unsigned long long)a0 atPath:(id)a1;
+ (id)validateResource:(unsigned long long)a0 withData:(id)a1;
+ (id)validateResourceAtPath:(id)a0;

@end
