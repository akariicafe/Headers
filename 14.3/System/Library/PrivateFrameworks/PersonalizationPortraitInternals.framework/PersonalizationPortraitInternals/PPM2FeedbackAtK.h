@class NSString;

@interface PPM2FeedbackAtK : PBCodable <NSCopying> {
    struct { unsigned char bucket : 1; unsigned char domain : 1; unsigned char evaluatedCount : 1; unsigned char feedbackType : 1; unsigned char k : 1; } _has;
}

@property (nonatomic) BOOL hasK;
@property (nonatomic) unsigned int k;
@property (nonatomic) BOOL hasEvaluatedCount;
@property (nonatomic) unsigned int evaluatedCount;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) int domain;
@property (nonatomic) BOOL hasFeedbackType;
@property (nonatomic) int feedbackType;
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;
@property (nonatomic) BOOL hasBucket;
@property (nonatomic) unsigned int bucket;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsDomain:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)domainAsString:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)feedbackTypeAsString:(int)a0;
- (void)copyTo:(id)a0;
- (int)StringAsFeedbackType:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
