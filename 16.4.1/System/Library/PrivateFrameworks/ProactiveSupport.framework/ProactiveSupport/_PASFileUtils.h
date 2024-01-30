@interface _PASFileUtils : NSObject

+ (id)mkstempWithPrefix:(id)a0 error:(id *)a1;
+ (BOOL)iterSortedEntriesInDirectory:(id)a0 selectDirent:(id /* block */)a1 onSortedDirent:(id /* block */)a2 error:(id *)a3;

@end
