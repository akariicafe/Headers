@class SIRINLUEXTERNALParser, NSString, SIRINLUEXTERNALUUID, NSMutableArray, SIRINLUEXTERNALRepetitionResult;

@interface SIRINLUEXTERNALUserParse : PBCodable <NSCopying> {
    struct { unsigned char probability : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdA;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *idA;
@property (retain, nonatomic) NSMutableArray *userDialogActs;
@property (nonatomic) BOOL hasProbability;
@property (nonatomic) double probability;
@property (readonly, nonatomic) BOOL hasParserId;
@property (retain, nonatomic) NSString *parserId;
@property (readonly, nonatomic) BOOL hasRepetitionResult;
@property (retain, nonatomic) SIRINLUEXTERNALRepetitionResult *repetitionResult;
@property (readonly, nonatomic) BOOL hasParser;
@property (retain, nonatomic) SIRINLUEXTERNALParser *parser;

+ (Class)userDialogActsType;

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
- (void)addUserDialogActs:(id)a0;
- (void)clearUserDialogActs;
- (unsigned long long)userDialogActsCount;
- (id)userDialogActsAtIndex:(unsigned long long)a0;

@end
