@class NSString;

@interface NTPBAdExposureIneligible : PBCodable <NSCopying> {
    struct { unsigned char exposureIneligibleLocationType : 1; unsigned char exposureIneligibleReason : 1; unsigned char feedType : 1; } _has;
}

@property (nonatomic) BOOL hasExposureIneligibleLocationType;
@property (nonatomic) int exposureIneligibleLocationType;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) BOOL hasExposureIneligibleLocationTypeId;
@property (retain, nonatomic) NSString *exposureIneligibleLocationTypeId;
@property (nonatomic) BOOL hasExposureIneligibleReason;
@property (nonatomic) int exposureIneligibleReason;

- (int)StringAsFeedType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)feedTypeAsString:(int)a0;

@end
