@class NSString, UINibStringIDTable;

@interface UINibDecoder : NSCoder {
    Class arrayClass;
    Class setClass;
    Class dictionaryClass;
    Class *classes;
    id *missingClasses;
    struct UINibDecoderObjectEntry { unsigned int x0; unsigned int x1; } *objects;
    struct UINibDecoderValue { unsigned int x0; unsigned int x1; } *values;
    char *valueTypes;
    void *valueData;
    unsigned long long valueDataSize;
    struct UINibDecoderHeader { unsigned char type[10]; unsigned int formatVersion; unsigned int coderVersion; struct UINibArchiveTableInfo { unsigned int count; unsigned int offset; } objects; struct UINibArchiveTableInfo { unsigned int count; unsigned int offset; } keys; struct UINibArchiveTableInfo { unsigned int count; unsigned int offset; } values; struct UINibArchiveTableInfo { unsigned int count; unsigned int offset; } classes; } header;
    id *objectsByObjectID;
    unsigned int *longObjectClassIDs;
    char *shortObjectClassIDs;
    unsigned int *keyMasks;
    long long inlinedValueKey;
    struct UINibDecoderRecursiveState { long long objectID; long long nextGenericKey; unsigned int nextValueSearchIndex; BOOL replaced; } recursiveState;
    UINibStringIDTable *keyIDTable;
    struct UIKeyToKeyIDCache { NSString *previousKey[64]; void *previousKeyID[64]; BOOL previousKeyExists[64]; long long hashHits; long long hashHotMisses; long long hashColdMisses; } keyIDCache;
    struct UIKeyAndScopeToValueCache { unsigned int previousScope; unsigned int previousKey; struct UINibDecoderValue *previousValue; } valueCache;
    long long lookupRounds;
    long long maxPossibleLookupRounds;
    long long failedByKeyMask;
    long long savedByKeyMask;
}

@property id delegate;
@property (readonly, nonatomic) long long uniqueIDForCurrentlyDecodingObject;
@property (readonly, nonatomic, getter=isReusable) BOOL reusable;

+ (id)unarchiveObjectWithData:(id)a0;
+ (id)unarchiveObjectWithFile:(id)a0;

- (float)decodeFloatForKey:(id)a0;
- (int)decodeIntForKey:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (id)decodePropertyList;
- (long long)decodeIntegerForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (long long)decodeInt64ForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (BOOL)allowsKeyedCoding;
- (void)decodeValuesOfObjCTypes:(const char *)a0;
- (struct CGPoint { double x0; double x1; })decodeCGPointForKey:(id)a0;
- (void)decodeValueOfObjCType:(const char *)a0 at:(void *)a1;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;
- (id)decodeObject;
- (void)dealloc;
- (id)decodeDataObject;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })decodeCGRectForKey:(id)a0;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)a0;
- (struct CGSize { double x0; double x1; })decodeCGSizeForKey:(id)a0;
- (unsigned int)systemVersion;
- (long long)versionForClassName:(id)a0;
- (void)decodeArrayOfObjCType:(const char *)a0 count:(unsigned long long)a1 at:(void *)a2;
- (BOOL)containsValueForKey:(id)a0;
- (void)finishDecoding;
- (id)initForReadingWithData:(id)a0;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })decodeCGAffineTransformForKey:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })decodeUIEdgeInsetsForKey:(id)a0;
- (id)initForReadingWithData:(id)a0 error:(id *)a1;
- (BOOL)validateAndIndexClasses:(const void *)a0 length:(unsigned long long)a1;
- (BOOL)validateAndIndexObjects:(const void *)a0 length:(unsigned long long)a1;
- (BOOL)decodeArrayOfCGFloats:(double *)a0 count:(long long)a1 forKey:(id)a2;
- (BOOL)decodeArrayOfDoubles:(double *)a0 count:(long long)a1 forKey:(id)a2;
- (BOOL)decodeArrayOfFloats:(float *)a0 count:(long long)a1 forKey:(id)a2;
- (id)decodeNXObject;
- (id)nextGenericKey;
- (BOOL)validateAndIndexData:(id)a0 error:(id *)a1;
- (BOOL)validateAndIndexKeys:(const void *)a0 length:(unsigned long long)a1;
- (BOOL)validateAndIndexValues:(const void *)a0 length:(unsigned long long)a1;

@end
