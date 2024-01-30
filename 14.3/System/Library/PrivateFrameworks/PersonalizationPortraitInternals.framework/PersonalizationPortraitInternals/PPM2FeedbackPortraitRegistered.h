@class NSString, NSMutableArray;

@interface PPM2FeedbackPortraitRegistered : PBCodable <NSCopying> {
    struct { unsigned char domain : 1; unsigned char feedbackDomainStatus : 1; unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasClientId;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) int domain;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasMappingId;
@property (retain, nonatomic) NSString *mappingId;
@property (retain, nonatomic) NSMutableArray *records;
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;
@property (nonatomic) BOOL hasFeedbackDomainStatus;
@property (nonatomic) int feedbackDomainStatus;

+ (Class)recordsType;

- (void)addRecords:(id)a0;
- (id)recordsAtIndex:(unsigned long long)a0;
- (void)clearRecords;
- (int)StringAsType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsDomain:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)domainAsString:(int)a0;
- (unsigned long long)hash;
- (unsigned long long)recordsCount;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsFeedbackDomainStatus:(id)a0;
- (id)feedbackDomainStatusAsString:(int)a0;
- (id)typeAsString:(int)a0;

@end
