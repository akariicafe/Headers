@interface _MDMutablePlistBytes : _MDPlistBytes {
    int _currentUID;
    int _parentSize;
    int _parentCount;
    int *_parentUIDs;
    struct __CFDictionary { } *_ptrUIDMap;
    unsigned long long *_fillPtr;
    unsigned long long *_limitPtr;
    unsigned long long *_rleTagPtr;
    unsigned long long _curContainer;
}

+ (struct __MDPlistBytes { } *)createArrayPlistBytesUsingBlock:(id /* block */)a0;
+ (struct __MDPlistBytes { } *)createDictionaryPlistBytesUsingBlock:(id /* block */)a0;

- (id)initWithCapacity:(unsigned long long)a0 useMalloc:(BOOL)a1 zone:(struct _malloc_zone_t { void *x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; char *x9; void /* function */ *x10; void /* function */ *x11; struct malloc_introspection_t *x12; unsigned int x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; } *)a2;
- (id)initWithCapacity:(unsigned long long)a0 useMalloc:(BOOL)a1;
- (id)initWithCapacity:(unsigned long long)a0;

@end
