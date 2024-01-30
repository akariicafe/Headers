@class CKDPRecordType, CKDPRecordFieldIdentifier, NSMutableArray, NSData;

@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest <NSCopying> {
    struct { unsigned char authPutType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) CKDPRecordType *type;
@property (readonly, nonatomic) BOOL hasField;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *field;
@property (retain, nonatomic) NSMutableArray *assets;
@property (retain, nonatomic) NSMutableArray *uploads;
@property (retain, nonatomic) NSMutableArray *contentRequestHeaders;
@property (readonly, nonatomic) BOOL hasAuthPutRequest;
@property (retain, nonatomic) NSData *authPutRequest;
@property (nonatomic) BOOL hasAuthPutType;
@property (nonatomic) int authPutType;

+ (id)options;
+ (Class)contentRequestHeadersType;
+ (Class)uploadsType;
+ (Class)assetsType;

- (unsigned long long)contentRequestHeadersCount;
- (id)assetsAtIndex:(unsigned long long)a0;
- (void)addUploads:(id)a0;
- (void)clearContentRequestHeaders;
- (id)contentRequestHeadersAtIndex:(unsigned long long)a0;
- (unsigned long long)assetsCount;
- (void)clearUploads;
- (unsigned long long)uploadsCount;
- (unsigned int)requestTypeCode;
- (id)uploadsAtIndex:(unsigned long long)a0;
- (void)clearAssets;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (Class)responseClass;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsAuthPutType:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)authPutTypeAsString:(int)a0;
- (id)description;
- (void)addAssets:(id)a0;
- (void).cxx_destruct;
- (void)addContentRequestHeaders:(id)a0;

@end
