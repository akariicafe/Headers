@class NSString, SECSFAActionDropEvent, SECSFAActionAutomaticBugCapture, SECSFAActionTapToRadar;

@interface SECSFAAction : PBCodable <NSCopying> {
    struct { unsigned char action : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRadarnumber;
@property (retain, nonatomic) NSString *radarnumber;
@property (readonly, nonatomic) BOOL hasTtr;
@property (retain, nonatomic) SECSFAActionTapToRadar *ttr;
@property (readonly, nonatomic) BOOL hasAbc;
@property (retain, nonatomic) SECSFAActionAutomaticBugCapture *abc;
@property (readonly, nonatomic) BOOL hasDrop;
@property (retain, nonatomic) SECSFAActionDropEvent *drop;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) int action;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)actionAsString:(int)a0;
- (int)StringAsAction:(id)a0;
- (void)clearOneofValuesForAction;

@end
