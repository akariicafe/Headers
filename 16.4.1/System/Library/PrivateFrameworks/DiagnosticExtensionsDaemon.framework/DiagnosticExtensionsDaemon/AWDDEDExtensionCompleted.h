@class NSString;

@interface AWDDEDExtensionCompleted : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char numbytes : 1; unsigned char numfiles : 1; unsigned char timestamp : 1; unsigned char error : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasExtension;
@property (retain, nonatomic) NSString *extension;
@property (nonatomic) BOOL hasNumfiles;
@property (nonatomic) unsigned long long numfiles;
@property (nonatomic) BOOL hasNumbytes;
@property (nonatomic) unsigned long long numbytes;
@property (nonatomic) BOOL hasError;
@property (nonatomic) int error;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;

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
- (int)StringAsError:(id)a0;
- (id)errorAsString:(int)a0;

@end
