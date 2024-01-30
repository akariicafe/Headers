@interface PPPBFeedbackItem : PBCodable <NSCopying> {
    struct { unsigned char feedbackType : 1; } _has;
}

@property (nonatomic) BOOL hasFeedbackType;
@property (nonatomic) int feedbackType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
