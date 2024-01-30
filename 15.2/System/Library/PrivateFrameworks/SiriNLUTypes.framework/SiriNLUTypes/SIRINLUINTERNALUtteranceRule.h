@class NSString, NSMutableArray, SIRINLUINTERNALCompareOptions;

@interface SIRINLUINTERNALUtteranceRule : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPattern;
@property (retain, nonatomic) NSString *pattern;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasCompareOptions;
@property (retain, nonatomic) SIRINLUINTERNALCompareOptions *compareOptions;
@property (retain, nonatomic) NSMutableArray *spansForNamedCaptureGroups;

+ (Class)spansForNamedCaptureGroupsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addSpansForNamedCaptureGroups:(id)a0;
- (unsigned long long)spansForNamedCaptureGroupsCount;
- (void)clearSpansForNamedCaptureGroups;
- (id)spansForNamedCaptureGroupsAtIndex:(unsigned long long)a0;

@end
