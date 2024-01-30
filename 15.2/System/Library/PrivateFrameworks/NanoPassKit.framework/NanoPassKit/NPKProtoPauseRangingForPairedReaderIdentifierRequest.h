@class NSString;

@interface NPKProtoPauseRangingForPairedReaderIdentifierRequest : PBRequest <NSCopying> {
    struct { unsigned char durationInSeconds : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPairedReaderIdentifier;
@property (retain, nonatomic) NSString *pairedReaderIdentifier;
@property (nonatomic) BOOL hasDurationInSeconds;
@property (nonatomic) unsigned long long durationInSeconds;

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
