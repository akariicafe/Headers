@interface CKPackageDB : NSObject

+ (BOOL)copySQLiteFileAtPath:(id)a0 toPath:(id)a1 timeout:(double)a2 error:(id *)a3;
+ (BOOL)moveSQLiteFileAtPath:(id)a0 toPath:(id)a1 timeout:(double)a2 error:(id *)a3;

@end
