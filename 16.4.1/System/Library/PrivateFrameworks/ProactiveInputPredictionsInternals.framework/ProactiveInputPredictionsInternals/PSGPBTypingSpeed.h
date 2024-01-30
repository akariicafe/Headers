@class NSString;

@interface PSGPBTypingSpeed : PBCodable <NSCopying> {
    struct { unsigned char messageDurationMilliseconds : 1; unsigned char messageLength : 1; unsigned char messageWords : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasZkwExperimentId;
@property (retain, nonatomic) NSString *zkwExperimentId;
@property (readonly, nonatomic) BOOL hasZkwTreatmentId;
@property (retain, nonatomic) NSString *zkwTreatmentId;
@property (readonly, nonatomic) BOOL hasZkwTreatmentName;
@property (retain, nonatomic) NSString *zkwTreatmentName;
@property (readonly, nonatomic) BOOL hasWbExperimentId;
@property (retain, nonatomic) NSString *wbExperimentId;
@property (readonly, nonatomic) BOOL hasWbTreatmentId;
@property (retain, nonatomic) NSString *wbTreatmentId;
@property (readonly, nonatomic) BOOL hasWbTreatmentName;
@property (retain, nonatomic) NSString *wbTreatmentName;
@property (readonly, nonatomic) BOOL hasLocaleIdentifier;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (nonatomic) BOOL hasMessageDurationMilliseconds;
@property (nonatomic) int messageDurationMilliseconds;
@property (nonatomic) BOOL hasMessageLength;
@property (nonatomic) int messageLength;
@property (nonatomic) BOOL hasMessageWords;
@property (nonatomic) int messageWords;

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

@end
