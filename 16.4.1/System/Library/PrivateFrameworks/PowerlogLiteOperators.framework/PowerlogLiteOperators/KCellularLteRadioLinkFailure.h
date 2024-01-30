@interface KCellularLteRadioLinkFailure : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char band : 1; unsigned char coexPolicy : 1; unsigned char failCause : 1; unsigned char hstState : 1; unsigned char rrcState : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasFailCause;
@property (nonatomic) int failCause;
@property (nonatomic) BOOL hasBand;
@property (nonatomic) unsigned int band;
@property (nonatomic) BOOL hasCoexPolicy;
@property (nonatomic) unsigned int coexPolicy;
@property (nonatomic) BOOL hasRrcState;
@property (nonatomic) int rrcState;
@property (nonatomic) BOOL hasHstState;
@property (nonatomic) unsigned int hstState;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsFailCause:(id)a0;
- (int)StringAsRrcState:(id)a0;
- (id)failCauseAsString:(int)a0;
- (id)rrcStateAsString:(int)a0;

@end
