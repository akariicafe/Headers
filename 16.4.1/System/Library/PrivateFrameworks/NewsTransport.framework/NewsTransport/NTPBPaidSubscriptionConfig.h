@interface NTPBPaidSubscriptionConfig : PBCodable <NSCopying> {
    struct { unsigned char maxGroupSizeIPad : 1; unsigned char maxGroupSizeIPhone : 1; unsigned char maxTimesHeadlineInGroup : 1; } _has;
}

@property (nonatomic) BOOL hasMaxGroupSizeIPad;
@property (nonatomic) long long maxGroupSizeIPad;
@property (nonatomic) BOOL hasMaxGroupSizeIPhone;
@property (nonatomic) long long maxGroupSizeIPhone;
@property (nonatomic) BOOL hasMaxTimesHeadlineInGroup;
@property (nonatomic) long long maxTimesHeadlineInGroup;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
