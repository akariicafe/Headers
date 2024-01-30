@class NSData, NSMutableArray;
@protocol NSKeyedArchiverDelegate;

@interface NSKeyedArchiver : NSCoder {
    void *_stream;
    _Atomic unsigned long long _flags;
    id<NSKeyedArchiverDelegate> _delegate;
    NSMutableArray *_containers;
    NSMutableArray *_objects;
    struct __CFDictionary { } *_objRefMap;
    struct __CFDictionary { } *_replacementMap;
    struct __CFDictionary { } *_classNameMap;
    struct __CFDictionary { } *_conditionals;
    struct __CFDictionary { } *_classes;
    unsigned long long _genericKey;
    const struct __CFKeyedArchiverUID **_cache;
    unsigned long long _cacheSize;
    unsigned long long _estimatedCount;
    struct __CFSet { } *_visited;
}

@property id<NSKeyedArchiverDelegate> delegate;
@property unsigned long long outputFormat;
@property (readonly) NSData *encodedData;
@property BOOL requiresSecureCoding;

+ (void)initialize;
+ (id)archivedDataWithRootObject:(id)a0;
+ (BOOL)archiveRootObject:(id)a0 toFile:(id)a1;
+ (id)archivedDataWithRootObject:(id)a0 requiringSecureCoding:(BOOL)a1 error:(id *)a2;
+ (id)classNameForClass:(Class)a0;
+ (void)setClassName:(id)a0 forClass:(Class)a1;

- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeValueOfObjCType:(const char *)a0 at:(const void *)a1;
- (void)encodeObject:(id)a0;
- (BOOL)allowsKeyedCoding;
- (void)encodeByrefObject:(id)a0;
- (void)encodeValuesOfObjCTypes:(const char *)a0;
- (void)encodeRootObject:(id)a0;
- (void)encodeBycopyObject:(id)a0;
- (void)encodeConditionalObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)encodeConditionalObject:(id)a0;
- (void)encodeBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)_encodeArrayOfObjects:(id)a0 forKey:(id)a1;
- (void)encodeDataObject:(id)a0;
- (id)init;
- (id)description;
- (void)encodeArrayOfObjCType:(const char *)a0 count:(unsigned long long)a1 at:(const void *)a2;
- (unsigned int)systemVersion;
- (long long)versionForClassName:(id)a0;
- (BOOL)_allowsValueCoding;
- (id)_blobForCurrentObject;
- (void)_encodePropertyList:(id)a0 forKey:(id)a1;
- (id)_initWithOutput:(id)a0;
- (void)_setBlobForCurrentObject:(id)a0;
- (id)classNameForClass:(Class)a0;
- (void)finishEncoding;
- (id)initForWritingWithMutableData:(id)a0;
- (id)initRequiringSecureCoding:(BOOL)a0;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (void)setClassName:(id)a0 forClass:(Class)a1;

@end
