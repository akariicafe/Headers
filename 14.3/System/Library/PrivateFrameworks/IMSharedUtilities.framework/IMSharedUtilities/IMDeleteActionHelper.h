@interface IMDeleteActionHelper : NSObject

+ (unsigned long long)_unsignedIntegerFromString:(id)a0;
+ (id)_makeDeletePartsDictFor:(id)a0 withIndexes:(id)a1 withIndexToRangeMap:(id)a2;
+ (BOOL)_convertDeletedPartsDict:(id)a0 toIndexSet:(id *)a1 toMap:(id *)a2;

@end
