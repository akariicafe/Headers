@class SYMessageHeader, NSString;

@interface SYRejectedVersion : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _supportedVersions;
}

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *inReplyTo;
@property (readonly, nonatomic) unsigned long long supportedVersionsCount;
@property (readonly, nonatomic) unsigned int *supportedVersions;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)setSupportedVersions:(unsigned int *)a0 count:(unsigned long long)a1;
- (unsigned int)supportedVersionsAtIndex:(unsigned long long)a0;
- (void)clearSupportedVersions;
- (void)addSupportedVersions:(unsigned int)a0;

@end
