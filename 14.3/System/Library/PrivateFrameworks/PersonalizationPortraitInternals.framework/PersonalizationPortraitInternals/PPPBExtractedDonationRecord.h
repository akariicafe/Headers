@class NSString;

@interface PPPBExtractedDonationRecord : PBCodable <NSCopying> {
    struct { unsigned char score : 1; unsigned char topicId : 1; unsigned char unixTimestampSec : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSourceBundleId;
@property (retain, nonatomic) NSString *sourceBundleId;
@property (readonly, nonatomic) BOOL hasAlgorithm;
@property (retain, nonatomic) NSString *algorithm;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;
@property (nonatomic) BOOL hasTopicId;
@property (nonatomic) unsigned long long topicId;
@property (readonly, nonatomic) BOOL hasNamedEntity;
@property (retain, nonatomic) NSString *namedEntity;
@property (nonatomic) BOOL hasUnixTimestampSec;
@property (nonatomic) unsigned long long unixTimestampSec;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
