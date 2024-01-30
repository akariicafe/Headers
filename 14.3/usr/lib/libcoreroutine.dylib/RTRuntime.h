@interface RTRuntime : NSObject

+ (id)classesFromImages:(id)a0;
+ (id)subclassesOfClass:(Class)a0 images:(id)a1 includeParentClass:(BOOL)a2;
+ (id)routineImageNames;
+ (id)directSubclassesOfClass:(Class)a0 images:(id)a1 includeParentClass:(BOOL)a2;
+ (id)routineClassStrings;
+ (id)routineSubclassesOfClass:(Class)a0;
+ (id)routineClasses;

@end
