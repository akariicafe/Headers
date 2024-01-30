@class NSString;

@interface SGM2ContactDetailExtraction : PBCodable <NSCopying> {
    struct { unsigned char detail : 1; unsigned char extractionModelVersion : 1; unsigned char extractionSignatureSource : 1; unsigned char foundInSenderCNContact : 1; unsigned char outcome : 1; unsigned char source : 1; unsigned char isUnlikelyPhone : 1; unsigned char signature : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasSignature;
@property (nonatomic) BOOL signature;
@property (nonatomic) BOOL hasDetail;
@property (nonatomic) int detail;
@property (nonatomic) BOOL hasOutcome;
@property (nonatomic) int outcome;
@property (nonatomic) BOOL hasFoundInSenderCNContact;
@property (nonatomic) int foundInSenderCNContact;
@property (nonatomic) BOOL hasExtractionModelVersion;
@property (nonatomic) unsigned int extractionModelVersion;
@property (nonatomic) BOOL hasIsUnlikelyPhone;
@property (nonatomic) BOOL isUnlikelyPhone;
@property (nonatomic) BOOL hasExtractionSignatureSource;
@property (nonatomic) int extractionSignatureSource;

- (int)StringAsSource:(id)a0;
- (id)sourceAsString:(int)a0;
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
- (int)StringAsOutcome:(id)a0;
- (id)outcomeAsString:(int)a0;
- (int)StringAsDetail:(id)a0;
- (int)StringAsFoundInSenderCNContact:(id)a0;
- (int)StringAsExtractionSignatureSource:(id)a0;
- (id)detailAsString:(int)a0;
- (id)foundInSenderCNContactAsString:(int)a0;
- (id)extractionSignatureSourceAsString:(int)a0;

@end
