@interface _MRSetDiscoveryModeProtobufMessage : PBCodable <NSCopying> {
    int _features;
    int _mode;
    struct { unsigned char features : 1; unsigned char mode : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
