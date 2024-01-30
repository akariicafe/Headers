@class NSString;

@interface MTPBSound : PBCodable <NSCopying> {
    struct { unsigned char mediaID : 1; unsigned char soundVolume : 1; } _has;
}

@property (nonatomic) unsigned int soundType;
@property (readonly, nonatomic) BOOL hasToneID;
@property (retain, nonatomic) NSString *toneID;
@property (nonatomic) BOOL hasMediaID;
@property (nonatomic) double mediaID;
@property (readonly, nonatomic) BOOL hasVibeID;
@property (retain, nonatomic) NSString *vibeID;
@property (nonatomic) BOOL hasSoundVolume;
@property (nonatomic) float soundVolume;

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
