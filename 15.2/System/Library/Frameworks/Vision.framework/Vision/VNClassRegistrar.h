@interface VNClassRegistrar : NSObject

+ (Class)classForClassCode:(unsigned int)a0 error:(id *)a1;
+ (id)classNameForClassCode:(unsigned int)a0 error:(id *)a1;
+ (BOOL)getClassCode:(unsigned int *)a0 forClass:(Class)a1 error:(id *)a2;
+ (BOOL)validateRequestClassName:(id)a0 error:(id *)a1;
+ (BOOL)getClassCode:(unsigned int *)a0 forClassName:(id)a1 error:(id *)a2;

@end
