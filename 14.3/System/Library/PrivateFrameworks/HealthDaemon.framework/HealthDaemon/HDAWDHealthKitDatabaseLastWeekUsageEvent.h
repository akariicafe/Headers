@interface HDAWDHealthKitDatabaseLastWeekUsageEvent : PBCodable <NSCopying> {
    struct { unsigned char databaseSizeMB : 1; unsigned char highFrequencyDataSizeMB : 1; unsigned char lastMonthDatabaseSizeIncreaseMB : 1; unsigned char lastMonthRowsAdded : 1; unsigned char manuallyEnteredTypesCount : 1; unsigned char percentageDeletedObjects : 1; unsigned char rowCountObjects : 1; unsigned char thirdPartyAppsCount : 1; unsigned char thirdPartyAppsWroteDataCount : 1; unsigned char timestamp : 1; unsigned char rowCountCDA : 1; unsigned char hasWatchSource : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasThirdPartyAppsCount;
@property (nonatomic) long long thirdPartyAppsCount;
@property (nonatomic) BOOL hasThirdPartyAppsWroteDataCount;
@property (nonatomic) long long thirdPartyAppsWroteDataCount;
@property (nonatomic) BOOL hasDatabaseSizeMB;
@property (nonatomic) long long databaseSizeMB;
@property (nonatomic) BOOL hasRowCountObjects;
@property (nonatomic) long long rowCountObjects;
@property (nonatomic) BOOL hasPercentageDeletedObjects;
@property (nonatomic) long long percentageDeletedObjects;
@property (nonatomic) BOOL hasManuallyEnteredTypesCount;
@property (nonatomic) long long manuallyEnteredTypesCount;
@property (nonatomic) BOOL hasHighFrequencyDataSizeMB;
@property (nonatomic) long long highFrequencyDataSizeMB;
@property (nonatomic) BOOL hasHasWatchSource;
@property (nonatomic) BOOL hasWatchSource;
@property (nonatomic) BOOL hasRowCountCDA;
@property (nonatomic) int rowCountCDA;
@property (nonatomic) BOOL hasLastMonthRowsAdded;
@property (nonatomic) long long lastMonthRowsAdded;
@property (nonatomic) BOOL hasLastMonthDatabaseSizeIncreaseMB;
@property (nonatomic) long long lastMonthDatabaseSizeIncreaseMB;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)rowCountCDAAsString:(int)a0;
- (int)StringAsRowCountCDA:(id)a0;

@end
