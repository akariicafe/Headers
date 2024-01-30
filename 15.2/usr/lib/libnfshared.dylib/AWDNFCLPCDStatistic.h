@interface AWDNFCLPCDStatistic : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _falseDetectionCount;
    unsigned int _tagType1ReadSuccessCount;
    unsigned int _tagType2ReadSuccessCount;
    unsigned int _tagType3ReadSuccessCount;
    unsigned int _tagType4ReadSuccessCount;
    unsigned int _tagType5ReadSuccessCount;
    struct { unsigned char timestamp : 1; unsigned char falseDetectionCount : 1; unsigned char tagType1ReadSuccessCount : 1; unsigned char tagType2ReadSuccessCount : 1; unsigned char tagType3ReadSuccessCount : 1; unsigned char tagType4ReadSuccessCount : 1; unsigned char tagType5ReadSuccessCount : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
