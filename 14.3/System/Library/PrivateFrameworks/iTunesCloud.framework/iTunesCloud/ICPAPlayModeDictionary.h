@interface ICPAPlayModeDictionary : PBCodable <NSCopying> {
    struct { unsigned char autoPlayMode : 1; unsigned char repeatPlayMode : 1; unsigned char shufflePlayMode : 1; } _has;
}

@property (nonatomic) BOOL hasRepeatPlayMode;
@property (nonatomic) int repeatPlayMode;
@property (nonatomic) BOOL hasShufflePlayMode;
@property (nonatomic) int shufflePlayMode;
@property (nonatomic) BOOL hasAutoPlayMode;
@property (nonatomic) int autoPlayMode;

- (id)repeatPlayModeAsString:(int)a0;
- (int)StringAsRepeatPlayMode:(id)a0;
- (id)shufflePlayModeAsString:(int)a0;
- (int)StringAsShufflePlayMode:(id)a0;
- (id)autoPlayModeAsString:(int)a0;
- (int)StringAsAutoPlayMode:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
