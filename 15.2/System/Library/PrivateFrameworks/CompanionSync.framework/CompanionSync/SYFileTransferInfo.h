@class SYMessageHeader, NSString;

@interface SYFileTransferInfo : PBCodable <NSCopying>

@property (retain, nonatomic) SYMessageHeader *header;
@property (readonly, nonatomic) BOOL hasStartAnchor;
@property (retain, nonatomic) NSString *startAnchor;
@property (readonly, nonatomic) BOOL hasEndAnchor;
@property (retain, nonatomic) NSString *endAnchor;
@property (nonatomic) unsigned long long decompressedFileSize;

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
