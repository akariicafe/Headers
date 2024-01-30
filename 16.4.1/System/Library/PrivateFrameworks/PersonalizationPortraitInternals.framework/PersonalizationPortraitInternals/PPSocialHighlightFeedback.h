@class NSString, PPRankableSocialHighlight;

@interface PPSocialHighlightFeedback : PBCodable <NSCopying> {
    struct { unsigned char feedbackCreationSecondsSinceReferenceDate : 1; unsigned char feedbackType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasClientIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (nonatomic) BOOL hasFeedbackType;
@property (nonatomic) int feedbackType;
@property (nonatomic) BOOL hasFeedbackCreationSecondsSinceReferenceDate;
@property (nonatomic) double feedbackCreationSecondsSinceReferenceDate;
@property (readonly, nonatomic) BOOL hasHighlight;
@property (retain, nonatomic) PPRankableSocialHighlight *highlight;
@property (readonly, nonatomic) BOOL hasVariant;
@property (retain, nonatomic) NSString *variant;

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
- (int)StringAsFeedbackType:(id)a0;
- (id)feedbackTypeAsString:(int)a0;

@end
