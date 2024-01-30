@interface DiskImages2 : NSObject

+ (BOOL)managedAttachWithParams:(id)a0 handle:(id *)a1 error:(id *)a2;
+ (BOOL)attachWithParams:(id)a0 handle:(id *)a1 error:(id *)a2;
+ (BOOL)convertWithParams:(id)a0 error:(id *)a1;
+ (BOOL)verifyWithParams:(id)a0 error:(id *)a1;
+ (id)imageURLFromDevice:(id)a0 error:(id *)a1;

@end
