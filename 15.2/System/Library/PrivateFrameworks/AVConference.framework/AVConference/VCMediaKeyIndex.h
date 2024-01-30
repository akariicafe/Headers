@interface VCMediaKeyIndex : NSObject <NSCopying> {
    unsigned char _MKI[16];
    unsigned int _activeSize;
    BOOL _isMapped;
    unsigned char _mapKey;
}

@property (readonly) unsigned int activeSize;
@property (readonly) BOOL isMapped;
@property (readonly) unsigned char mapKey;

+ (id)newMKIWithBytes:(char *)a0 bufferSize:(unsigned int)a1;
+ (id)makeInvalidKey;

- (id)initWithUUID:(unsigned char[16])a0;
- (const char *)MKI;
- (BOOL)setMapping:(unsigned char)a0;
- (id)initWithNSUUID:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isValid;
- (void)setMapKey:(unsigned char)a0;
- (id)initWithBytes:(char *)a0 bufferSize:(unsigned int)a1;
- (void)setActiveSize:(unsigned int)a0;
- (void)fullKeyBytes:(unsigned char[16])a0;
- (unsigned int)mappedKeySize;
- (unsigned int)mappedKeyBytes:(char *)a0 size:(unsigned int)a1;
- (BOOL)isStartingWithPrefix:(id)a0;

@end
