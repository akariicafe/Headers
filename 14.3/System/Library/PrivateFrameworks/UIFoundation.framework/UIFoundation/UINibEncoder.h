@class NSMutableData, NSMutableSet;

@interface UINibEncoder : NSCoder {
    struct __CFDictionary { } *objectsToObjectIDs;
    struct __CFDictionary { } *objectIDsToObjects;
    struct __CFArray { } *values;
    struct __CFSet { } *encodedObjects;
    NSMutableData *data;
    struct __CFDictionary { } *replacements;
    unsigned int nextObjectID;
    struct { unsigned int currentObjectID; unsigned int nextAnonymousKey; } recursiveState;
    NSMutableSet *objectsUniquedByValue;
    struct __CFSet { } *objectsReplacedWithNil;
}

@property id delegate;

+ (id)archivedDataWithRootObject:(id)a0;
+ (BOOL)archiveRootObject:(id)a0 toFile:(id)a1;

- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (long long)versionForClassName:(id)a0;
- (void)encodeRootObject:(id)a0;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (BOOL)allowsKeyedCoding;
- (void)encodeValueOfObjCType:(const char *)a0 at:(const void *)a1;
- (void)encodeBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initForWritingWithMutableData:(id)a0;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (void)encodeValuesOfObjCTypes:(const char *)a0;
- (void)encodeConditionalObject:(id)a0;
- (void)encodeBycopyObject:(id)a0;
- (void)finishEncoding;
- (void)encodeArrayOfObjCType:(const char *)a0 count:(unsigned long long)a1 at:(const void *)a2;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0;
- (void)encodeCGSize:(struct CGSize { double x0; double x1; })a0 forKey:(id)a1;
- (unsigned int)systemVersion;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)serializeObject:(id)a0;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeConditionalObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)encodeByrefObject:(id)a0;
- (void)serializeArray:(id)a0;
- (id)assignObjectIDForObject:(id)a0;
- (id)objectIDForObject:(id)a0;
- (Class)encodedClassForObject:(id)a0;
- (id)encodedClassNameForClass:(Class)a0;
- (void)serializeSet:(id)a0;
- (BOOL)object:(id)a0 encodesWithCoderFromClass:(Class)a1;
- (BOOL)object:(id)a0 encodesAsMemberAndWithCoderOfClass:(Class)a1;
- (BOOL)shouldUniqueObjectByValue:(id)a0;
- (void)serializeDictionary:(id)a0;
- (void)appendValue:(id)a0;
- (id)replacementObjectForObject:(id)a0 forKey:(id)a1;
- (void)encodeArrayOfDoubles:(double *)a0 count:(long long)a1 forKey:(id)a2;
- (void)encodeArrayOfCGFloats:(double *)a0 count:(long long)a1 forKey:(id)a2;
- (BOOL)previouslyCodedObject:(id)a0;
- (id)encodedClassNameForObject:(id)a0;
- (void)encodeArrayOfFloats:(float *)a0 count:(long long)a1 forKey:(id)a2;
- (void)encodeCGPoint:(struct CGPoint { double x0; double x1; })a0 forKey:(id)a1;
- (id)nextGenericKey;
- (void)encodeCGAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 forKey:(id)a1;
- (void)encodeUIEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 forKey:(id)a1;
- (void)encodeCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forKey:(id)a1;

@end
