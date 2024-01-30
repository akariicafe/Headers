@interface VCMasterKeyIndex : NSObject <NSCopying> {
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

- (const char *)MKI;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isValid;
- (id)initWithUUID:(unsigned char[16])a0;
- (id)initWithNSUUID:(id)a0;
- (BOOL)setMapping:(unsigned char)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)setMapKey:(unsigned char)a0;
- (id)initWithBytes:(char *)a0 bufferSize:(unsigned int)a1;
- (void)setActiveSize:(unsigned int)a0;
- (void)fullKeyBytes:(unsigned char[16])a0;
- (unsigned int)mappedKeySize;
- (unsigned int)mappedKeyBytes:(char *)a0 size:(unsigned int)a1;

@end
