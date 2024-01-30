@class NSString, _ICLLRadioSeed;

@interface _ICLLRadioSource : PBCodable <NSCopying> {
    NSString *_featureName;
    _ICLLRadioSeed *_seed;
    NSString *_stationId;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
