@class NSString;

@interface HMEProtoEventMetadata : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char cachePolicy : 1; unsigned char combinePolicy : 1; unsigned char qos : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSource;
@property (retain, nonatomic) NSString *source;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasCachePolicy;
@property (nonatomic) unsigned int cachePolicy;
@property (nonatomic) BOOL hasCombinePolicy;
@property (nonatomic) unsigned int combinePolicy;
@property (nonatomic) BOOL hasQos;
@property (nonatomic) unsigned int qos;

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
