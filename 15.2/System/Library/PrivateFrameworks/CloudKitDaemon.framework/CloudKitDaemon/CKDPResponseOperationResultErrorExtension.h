@class NSString, NSData;

@interface CKDPResponseOperationResultErrorExtension : PBCodable <NSCopying> {
    struct { unsigned char typeCode : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasExtensionName;
@property (retain, nonatomic) NSString *extensionName;
@property (nonatomic) BOOL hasTypeCode;
@property (nonatomic) unsigned int typeCode;
@property (readonly, nonatomic) BOOL hasExtensionPayload;
@property (retain, nonatomic) NSData *extensionPayload;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
