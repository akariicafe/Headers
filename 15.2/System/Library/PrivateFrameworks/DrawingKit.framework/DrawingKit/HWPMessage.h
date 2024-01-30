@class NSString, NSData, PBUnknownFields;

@interface HWPMessage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char creationDate : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) long long creationDate;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasDrawing;
@property (retain, nonatomic) NSData *drawing;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
