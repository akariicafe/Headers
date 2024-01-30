@class NSData;
@protocol NSKeyedArchiverDelegate;

@interface NSKeyedArchiver : NSCoder {
    void *_stream;
    _Atomic unsigned long long _flags;
    id _delegate;
    id _containers;
    id _objects;
    id _objRefMap;
    id _replacementMap;
    id _classNameMap;
    id _conditionals;
    id _classes;
    unsigned long long _genericKey;
    void *_cache;
    unsigned long long _cacheSize;
    unsigned long long _estimatedCount;
    void *_reserved2;
    id _visited;
    void *_reserved0;
}

@property id<NSKeyedArchiverDelegate> delegate;
@property unsigned long long outputFormat;
@property (readonly) NSData *encodedData;
@property BOOL requiresSecureCoding;

+ (void)initialize;
+ (id)archivedDataWithRootObject:(id)a0 requiringSecureCoding:(BOOL)a1 error:(id *)a2;
+ (id)archivedDataWithRootObject:(id)a0;
+ (void)setClassName:(id)a0 forClass:(Class)a1;
+ (id)classNameForClass:(Class)a0;
+ (BOOL)archiveRootObject:(id)a0 toFile:(id)a1;

- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (long long)versionForClassName:(id)a0;
- (id)_blobForCurrentObject;
- (void)encodeRootObject:(id)a0;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (BOOL)allowsKeyedCoding;
- (void)encodeValueOfObjCType:(const char *)a0 at:(const void *)a1;
- (void)encodeBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initForWritingWithMutableData:(id)a0;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (void)encodeValuesOfObjCTypes:(const char *)a0;
- (void)encodeConditionalObject:(id)a0;
- (id)init;
- (void)encodeBycopyObject:(id)a0;
- (void)finishEncoding;
- (void)encodeArrayOfObjCType:(const char *)a0 count:(unsigned long long)a1 at:(const void *)a2;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void)_encodePropertyList:(id)a0 forKey:(id)a1;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)setClassName:(id)a0 forClass:(Class)a1;
- (void)encodeObject:(id)a0;
- (void)_setBlobForCurrentObject:(id)a0;
- (unsigned int)systemVersion;
- (id)_initWithOutput:(id)a0;
- (BOOL)_allowsValueCoding;
- (void)_encodeArrayOfObjects:(id)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeDataObject:(id)a0;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeConditionalObject:(id)a0 forKey:(id)a1;
- (id)initRequiringSecureCoding:(BOOL)a0;
- (void)dealloc;
- (void)encodeByrefObject:(id)a0;
- (id)classNameForClass:(Class)a0;
- (id)description;

@end
