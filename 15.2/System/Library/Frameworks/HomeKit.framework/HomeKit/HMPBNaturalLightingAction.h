@class NSData;

@interface HMPBNaturalLightingAction : PBCodable <NSCopying> {
    struct { unsigned char naturalLightingEnabled : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) BOOL hasNaturalLightingEnabled;
@property (nonatomic) BOOL naturalLightingEnabled;
@property (readonly, nonatomic) BOOL hasLightProfileUUID;
@property (retain, nonatomic) NSData *lightProfileUUID;

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
