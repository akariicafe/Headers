@class NSString, NSMutableArray;

@interface RMRemoteManagementScreenTimeState : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _daysSinceCreationDates;
    struct { unsigned char alwaysAllowedAppsCount : 1; unsigned char daysWithScreenTimeEnabled : 1; unsigned char numberOfLimits : 1; unsigned char timestamp : 1; unsigned char contentPrivacyRestrictionsEnabled : 1; unsigned char customDowntimeEnabled : 1; unsigned char downtimeEnabled : 1; unsigned char hasPasscode : 1; unsigned char isManaged : 1; unsigned char isManaging : 1; unsigned char screenTimeEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasScreenTimeEnabled;
@property (nonatomic) BOOL screenTimeEnabled;
@property (nonatomic) BOOL hasDaysWithScreenTimeEnabled;
@property (nonatomic) unsigned long long daysWithScreenTimeEnabled;
@property (readonly, nonatomic) BOOL hasFamilyMemberType;
@property (retain, nonatomic) NSString *familyMemberType;
@property (nonatomic) BOOL hasIsManaged;
@property (nonatomic) BOOL isManaged;
@property (nonatomic) BOOL hasIsManaging;
@property (nonatomic) BOOL isManaging;
@property (nonatomic) BOOL hasHasPasscode;
@property (nonatomic) BOOL hasPasscode;
@property (nonatomic) BOOL hasDowntimeEnabled;
@property (nonatomic) BOOL downtimeEnabled;
@property (nonatomic) BOOL hasCustomDowntimeEnabled;
@property (nonatomic) BOOL customDowntimeEnabled;
@property (nonatomic) BOOL hasNumberOfLimits;
@property (nonatomic) unsigned long long numberOfLimits;
@property (retain, nonatomic) NSMutableArray *limitedCategories;
@property (readonly, nonatomic) unsigned long long daysSinceCreationDatesCount;
@property (readonly, nonatomic) unsigned long long *daysSinceCreationDates;
@property (nonatomic) BOOL hasAlwaysAllowedAppsCount;
@property (nonatomic) unsigned long long alwaysAllowedAppsCount;
@property (nonatomic) BOOL hasContentPrivacyRestrictionsEnabled;
@property (nonatomic) BOOL contentPrivacyRestrictionsEnabled;

+ (Class)limitedCategoriesType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addLimitedCategories:(id)a0;
- (unsigned long long)limitedCategoriesCount;
- (void)clearLimitedCategories;
- (id)limitedCategoriesAtIndex:(unsigned long long)a0;
- (void)clearDaysSinceCreationDates;
- (unsigned long long)daysSinceCreationDateAtIndex:(unsigned long long)a0;
- (void)addDaysSinceCreationDate:(unsigned long long)a0;
- (void)setDaysSinceCreationDates:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
