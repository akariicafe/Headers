@class NSData, NSString;

@interface _PFExternalReferenceData : NSData <NSCopying, NSMutableCopying> {
    NSData *_originalData;
    void *_bytesPtrForStore;
    unsigned long long _bytesLengthForStore;
    void *_bytesPtrForExternalReference;
    unsigned long long _bytesLengthForExternalReference;
    NSString *_externalReferenceLocation;
    NSString *_safeguardLocation;
    id _ubiquitousLocation;
    struct __externalDataFlags { unsigned char _isStoredExternally : 1; unsigned char _hasMappedData : 1; unsigned char _cleanupOnDealloc : 1; unsigned char _dataProtectionLevel : 3; unsigned char _isStoredUbiquitously : 1; unsigned char _createdByUbiquityImport : 1; unsigned int _reserved : 24; } _externalDataFlags;
}

+ (Class)classForKeyedUnarchiver;

- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)isEqualToData:(id)a0;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (const void *)bytes;
- (id)initForExternalLocation:(id)a0 safeguardLocation:(id)a1 data:(id)a2 protectionLevel:(int)a3;
- (unsigned long long)_bytesLengthForExternalReference;
- (int)preferredProtectionLevel;
- (id)_safeguardLocationString;
- (void)_writeExternalReferenceToInterimLocation;
- (void)_deleteExternalReferenceFromPermanentLocation;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (Class)classForCoder;
- (void)doCleanupOnDealloc;
- (id)UUID;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const void *)_bytesPtrForExternalReference;
- (const char *)_externalReferenceLocation;
- (BOOL)_createdByUbiquityImport;
- (BOOL)hasExternalReferenceContent;
- (void)dealloc;
- (id)initForUbiquityDictionary:(id)a0 store:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)_setBytesForExternalReference:(const void *)a0;
- (void)_moveExternalReferenceToPermanentLocation;
- (unsigned long long)_bytesLengthForStore;
- (const char *)_safeguardLocation;
- (id)copy;
- (const void *)_bytesPtrForStore;
- (id)_originalData;
- (id)externalReferenceLocationString;
- (id)initWithStoreBytes:(const void *)a0 length:(unsigned long long)a1 externalLocation:(id)a2 safeguardLocation:(id)a3 protectionLevel:(int)a4;
- (id)description;
- (id)databaseValue;
- (id)initWithStoreBytes:(const void *)a0 length:(unsigned long long)a1 externalLocation:(id)a2 safeguardLocation:(id)a3 protectionLevel:(int)a4 ubiquitousLocation:(id)a5;
- (id)mutableCopy;

@end
