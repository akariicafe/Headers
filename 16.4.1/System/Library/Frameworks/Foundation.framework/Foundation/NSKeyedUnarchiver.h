@class _NSKeyedUnarchiverHelper;
@protocol NSKeyedUnarchiverDelegate;

@interface NSKeyedUnarchiver : NSCoder {
    id<NSKeyedUnarchiverDelegate> _delegate;
    _Atomic unsigned long long _flags;
    struct __CFDictionary { } *_objRefMap;
    struct __CFDictionary { } *_replacementMap;
    struct __CFDictionary { } *_nameClassMap;
    struct __CFDictionary { } *_tmpRefObjMap;
    struct __CFDictionary { } *_refObjMap;
    int _genericKey;
    struct { struct { unsigned char x0[5]; unsigned char x1; unsigned char x2; unsigned char x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; } x0; unsigned long long x1; unsigned long long x2; } *_offsetData;
    struct __CFArray { } *_containers;
    struct __CFArray { } *_objects;
    struct __CFData { } *_data;
    const char *_bytes;
    unsigned long long _len;
    _NSKeyedUnarchiverHelper *_helper;
    struct __CFDictionary { } *_offsetObjMap;
}

@property id<NSKeyedUnarchiverDelegate> delegate;
@property BOOL requiresSecureCoding;
@property long long decodingFailurePolicy;

+ (id)ls_unarchivedObjectOfClass:(Class)a0 fromData:(id)a1 error:(id *)a2;
+ (void)initialize;
+ (id)unarchivedObjectOfClass:(Class)a0 fromData:(id)a1 error:(id *)a2;
+ (id)_strictlyUnarchivedObjectOfClasses:(id)a0 fromData:(id)a1 error:(id *)a2;
+ (int)_swift_checkClassAndWarnForKeyedArchiving:(Class)a0 operation:(int)a1;
+ (Class)classForClassName:(id)a0;
+ (void)setClass:(Class)a0 forClassName:(id)a1;
+ (id)unarchiveObjectWithData:(id)a0;
+ (id)unarchiveObjectWithData:(id)a0 error:(id *)a1;
+ (id)unarchiveObjectWithFile:(id)a0;
+ (id)unarchiveTopLevelObjectWithData:(id)a0 error:(id *)a1;
+ (id)unarchivedArrayOfObjectsOfClass:(Class)a0 fromData:(id)a1 error:(id *)a2;
+ (id)unarchivedArrayOfObjectsOfClasses:(id)a0 fromData:(id)a1 error:(id *)a2;
+ (id)unarchivedDictionaryWithKeysOfClass:(Class)a0 objectsOfClass:(Class)a1 fromData:(id)a2 error:(id *)a3;
+ (id)unarchivedDictionaryWithKeysOfClasses:(id)a0 objectsOfClasses:(id)a1 fromData:(id)a2 error:(id *)a3;
+ (id)unarchivedObjectOfClasses:(id)a0 fromData:(id)a1 error:(id *)a2;

- (id)allowedClasses;
- (float)decodeFloatForKey:(id)a0;
- (int)decodeIntForKey:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (id)initWithStream:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (void)setAllowedClasses:(id)a0;
- (long long)decodeInt64ForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (BOOL)allowsKeyedCoding;
- (void)decodeValuesOfObjCTypes:(const char *)a0;
- (void)_enforceSubclassesMustBeExplicitlyMentionedWhenDecoded;
- (id)decodeDictionaryWithKeysOfClasses:(id)a0 objectsOfClasses:(id)a1 forKey:(id)a2;
- (void)decodeValueOfObjCType:(const char *)a0 at:(void *)a1;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;
- (id)decodeObject;
- (void)dealloc;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (id)decodeDataObject;
- (id)error;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)a0;
- (id)init;
- (id)_decodeArrayOfObjectsForKey:(id)a0;
- (id)description;
- (id)decodeArrayOfObjectsOfClasses:(id)a0 forKey:(id)a1;
- (unsigned int)systemVersion;
- (long long)versionForClassName:(id)a0;
- (void)decodeArrayOfObjCType:(const char *)a0 count:(unsigned long long)a1 at:(void *)a2;
- (BOOL)containsValueForKey:(id)a0;
- (void)_enableStrictSecureDecodingMode;
- (void)__setError:(id)a0;
- (id)_allowedClassNames;
- (BOOL)_allowsValueCoding;
- (id)_blobForCurrentObject;
- (BOOL)_containsNextUnkeyedObject;
- (unsigned int)_currentUniqueIdentifier;
- (id)_decodeObjectOfClass:(Class)a0;
- (id)_decodePropertyListForKey:(id)a0;
- (void)_enforceExplicitPlistTypes;
- (id)_initForReadingFromData:(id)a0 error:(id *)a1 throwLegacyExceptions:(BOOL)a2;
- (id)_initWithStream:(struct __CFReadStream { } *)a0 data:(id)a1 topDict:(struct __CFDictionary { } *)a2;
- (void)_replaceObject:(id)a0 withObject:(id)a1;
- (void)_setAllowedClassNames:(id)a0;
- (BOOL)_strictSecureDecodingEnabled;
- (void)_temporaryMapReplaceObject:(id)a0 withObject:(id)a1;
- (BOOL)_validateAllowedClassesContainsClass:(Class)a0 forKey:(id)a1;
- (BOOL)_willEnforceExplicitPlistTypes;
- (Class)classForClassName:(id)a0;
- (void)finishDecoding;
- (id)initForReadingFromData:(id)a0 error:(id *)a1;
- (id)initForReadingWithData:(id)a0;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (void)setClass:(Class)a0 forClassName:(id)a1;

@end
