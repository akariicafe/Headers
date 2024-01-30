@interface AWDNFCLPCDStatistic : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char falseDetectionCount : 1; unsigned char tagType1ReadSuccessCount : 1; unsigned char tagType2ReadSuccessCount : 1; unsigned char tagType3ReadSuccessCount : 1; unsigned char tagType4ReadSuccessCount : 1; unsigned char tagType5ReadSuccessCount : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasFalseDetectionCount;
@property (nonatomic) unsigned int falseDetectionCount;
@property (nonatomic) BOOL hasTagType1ReadSuccessCount;
@property (nonatomic) unsigned int tagType1ReadSuccessCount;
@property (nonatomic) BOOL hasTagType2ReadSuccessCount;
@property (nonatomic) unsigned int tagType2ReadSuccessCount;
@property (nonatomic) BOOL hasTagType3ReadSuccessCount;
@property (nonatomic) unsigned int tagType3ReadSuccessCount;
@property (nonatomic) BOOL hasTagType4ReadSuccessCount;
@property (nonatomic) unsigned int tagType4ReadSuccessCount;
@property (nonatomic) BOOL hasTagType5ReadSuccessCount;
@property (nonatomic) unsigned int tagType5ReadSuccessCount;

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
