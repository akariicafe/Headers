@class PBUnknownFields, NSString, PBDataReader;

@interface GEOPDMerchantInformation : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_merchantAdditionalData;
    NSString *_merchantAddress;
    NSString *_merchantCanl;
    NSString *_merchantCity;
    NSString *_merchantCountryCode;
    NSString *_merchantDoingBusinessAsName;
    NSString *_merchantEnhancedName;
    NSString *_merchantId;
    NSString *_merchantRawAddress;
    NSString *_merchantRawCity;
    NSString *_merchantRawState;
    NSString *_merchantState;
    NSString *_merchantType;
    NSString *_merchantZip;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _merchantCleanConfidenceLevel;
    struct { unsigned char has_merchantCleanConfidenceLevel : 1; unsigned char read_unknownFields : 1; unsigned char read_merchantAdditionalData : 1; unsigned char read_merchantAddress : 1; unsigned char read_merchantCanl : 1; unsigned char read_merchantCity : 1; unsigned char read_merchantCountryCode : 1; unsigned char read_merchantDoingBusinessAsName : 1; unsigned char read_merchantEnhancedName : 1; unsigned char read_merchantId : 1; unsigned char read_merchantRawAddress : 1; unsigned char read_merchantRawCity : 1; unsigned char read_merchantRawState : 1; unsigned char read_merchantState : 1; unsigned char read_merchantType : 1; unsigned char read_merchantZip : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
