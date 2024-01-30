@class SYMessageHeader, NSString;

@interface SYFileTransferInfo : PBCodable <NSCopying>

@property (retain, nonatomic) SYMessageHeader *header;
@property (readonly, nonatomic) BOOL hasStartAnchor;
@property (retain, nonatomic) NSString *startAnchor;
@property (readonly, nonatomic) BOOL hasEndAnchor;
@property (retain, nonatomic) NSString *endAnchor;
@property (nonatomic) unsigned long long decompressedFileSize;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
