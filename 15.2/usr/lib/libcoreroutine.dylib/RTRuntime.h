@interface RTRuntime : NSObject

+ (double)footprint;
+ (id)classesFromImages:(id)a0;
+ (id)subclassesOfClass:(Class)a0 images:(id)a1 includeParentClass:(BOOL)a2;
+ (id)routineImageNames;
+ (id)directSubclassesOfClass:(Class)a0 images:(id)a1 includeParentClass:(BOOL)a2;
+ (id)objToString:(id)a0 filterProperties:(id)a1;
+ (id)objToDictionary:(id)a0 filterProperties:(id)a1;
+ (id)routineClassStrings;
+ (id)routineSubclassesOfClass:(Class)a0;
+ (id)routineClasses;

@end
