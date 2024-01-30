@interface VCMediaKeyIndex : NSObject <NSCopying> {
    unsigned char _MKI[16];
    unsigned int _activeSize;
    BOOL _isMapped;
    unsigned char _mapKey;
}

@property (readonly) unsigned int activeSize;

+ (id)makeInvalidKey;
+ (id)newMKIWithBytes:(char *)a0 bufferSize:(unsigned int)a1;

- (id)initWithUUID:(unsigned char[16])a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)setMapping:(unsigned char)a0;
- (unsigned long long)hash;
- (id)initWithNSUUID:(id)a0;
- (id)description;
- (const char *)MKI;
- (void)fullKeyBytes:(unsigned char[16])a0;
- (id)initWithBytes:(char *)a0 bufferSize:(unsigned int)a1;
- (BOOL)isStartingWithPrefix:(id)a0;
- (unsigned int)mappedKeyBytes:(char *)a0 size:(unsigned int)a1;
- (unsigned int)mappedKeySize;
- (void)setActiveSize:(unsigned int)a0;
- (void)setMapKey:(unsigned char)a0;

@end
