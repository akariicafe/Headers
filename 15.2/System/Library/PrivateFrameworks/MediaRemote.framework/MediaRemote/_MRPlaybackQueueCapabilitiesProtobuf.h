@interface _MRPlaybackQueueCapabilitiesProtobuf : PBCodable <NSCopying> {
    BOOL _requestByIdentifiers;
    BOOL _requestByRange;
    BOOL _requestByRequest;
    struct { unsigned char requestByIdentifiers : 1; unsigned char requestByRange : 1; unsigned char requestByRequest : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
