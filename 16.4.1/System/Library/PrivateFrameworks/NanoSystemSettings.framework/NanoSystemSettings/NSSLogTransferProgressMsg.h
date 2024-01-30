@class NSString;

@interface NSSLogTransferProgressMsg : PBCodable <NSCopying> {
    struct { unsigned char progress : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPath;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) BOOL hasProgress;
@property (nonatomic) unsigned long long progress;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
