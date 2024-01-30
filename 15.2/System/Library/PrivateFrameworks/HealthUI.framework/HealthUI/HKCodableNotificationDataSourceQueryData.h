@class NSMutableArray;

@interface HKCodableNotificationDataSourceQueryData : PBCodable <NSCopying> {
    struct { unsigned char count : 1; unsigned char dataType : 1; unsigned char latestSupportedVersion : 1; unsigned char minimumSupportedVersion : 1; } _has;
}

@property (nonatomic) BOOL hasDataType;
@property (nonatomic) long long dataType;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) long long count;
@property (retain, nonatomic) NSMutableArray *samples;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;

+ (Class)samplesType;

- (void)clearSamples;
- (id)samplesAtIndex:(unsigned long long)a0;
- (void)addSamples:(id)a0;
- (unsigned long long)samplesCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
