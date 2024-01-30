@interface CalLazyCreateUtils : NSObject

+ (void)addArray:(id)a0 toArray:(id *)a1;
+ (void)addArray:(id)a0 withKey:(id)a1 toDictionaryOfArrays:(id *)a2;
+ (void)addArray:(id)a0 withKey:(id)a1 toDictionaryOfSets:(id *)a2;
+ (void)addArray:(id)a0 withKey:(id)a1 toStrongTableOfArrays:(id *)a2;
+ (void)addItem:(id)a0 withKey:(id)a1 toDictionaryOfArrays:(id *)a2;
+ (void)addItem:(id)a0 withKey:(id)a1 toDictionaryOfSets:(id *)a2;
+ (void)addItem:(id)a0 withKey:(id)a1 toStrongTableOfArrays:(id *)a2;
+ (void)addObject:(id)a0 toArray:(id *)a1;
+ (void)addObject:(id)a0 toSet:(id *)a1;
+ (void)addSet:(id)a0 toSet:(id *)a1;
+ (void)addSet:(id)a0 withKey:(id)a1 toDictionaryOfSets:(id *)a2;
+ (void)setValue:(id)a0 withKey:(id)a1 inDictionary:(id *)a2;

@end
