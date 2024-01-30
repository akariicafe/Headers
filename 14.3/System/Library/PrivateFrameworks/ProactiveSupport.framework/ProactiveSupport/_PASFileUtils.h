@interface _PASFileUtils : NSObject

+ (BOOL)iterSortedEntriesInDirectory:(id)a0 selectDirent:(id /* block */)a1 onSortedDirent:(id /* block */)a2 error:(id *)a3;
+ (id)mkstempWithPrefix:(id)a0 error:(id *)a1;

@end
