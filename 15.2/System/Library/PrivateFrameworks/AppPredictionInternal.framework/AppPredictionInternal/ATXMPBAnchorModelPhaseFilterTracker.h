@class NSString;

@interface ATXMPBAnchorModelPhaseFilterTracker : PBCodable <NSCopying> {
    struct { unsigned char numEndingCandidates : 1; unsigned char numStartingCandidates : 1; unsigned char phaseDescription : 1; } _has;
}

@property (nonatomic) BOOL hasPhaseDescription;
@property (nonatomic) int phaseDescription;
@property (readonly, nonatomic) BOOL hasPhaseType;
@property (retain, nonatomic) NSString *phaseType;
@property (nonatomic) BOOL hasNumStartingCandidates;
@property (nonatomic) unsigned int numStartingCandidates;
@property (nonatomic) BOOL hasNumEndingCandidates;
@property (nonatomic) unsigned int numEndingCandidates;
@property (readonly, nonatomic) BOOL hasAnchorType;
@property (retain, nonatomic) NSString *anchorType;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;

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
- (id)phaseDescriptionAsString:(int)a0;
- (int)StringAsPhaseDescription:(id)a0;

@end
