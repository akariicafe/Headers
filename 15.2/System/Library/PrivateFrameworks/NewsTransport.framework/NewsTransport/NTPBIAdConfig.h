@interface NTPBIAdConfig : PBCodable <NSCopying> {
    struct { unsigned char segmentsHistoryWindowInterval : 1; unsigned char segmentsMinimumArticleCount : 1; unsigned char segmentsSubmissionFrequency : 1; unsigned char segmentsThreshold : 1; unsigned char segmentsEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasSegmentsEnabled;
@property (nonatomic) BOOL segmentsEnabled;
@property (nonatomic) BOOL hasSegmentsThreshold;
@property (nonatomic) double segmentsThreshold;
@property (nonatomic) BOOL hasSegmentsSubmissionFrequency;
@property (nonatomic) long long segmentsSubmissionFrequency;
@property (nonatomic) BOOL hasSegmentsHistoryWindowInterval;
@property (nonatomic) long long segmentsHistoryWindowInterval;
@property (nonatomic) BOOL hasSegmentsMinimumArticleCount;
@property (nonatomic) long long segmentsMinimumArticleCount;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
