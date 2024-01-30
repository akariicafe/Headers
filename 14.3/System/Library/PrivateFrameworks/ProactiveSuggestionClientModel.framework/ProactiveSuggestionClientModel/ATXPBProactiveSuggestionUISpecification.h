@class NSString, NSMutableArray;

@interface ATXPBProactiveSuggestionUISpecification : PBCodable <NSCopying> {
    struct { unsigned char allowedOnHomeScreen : 1; unsigned char allowedOnLockscreen : 1; unsigned char allowedOnSpotlight : 1; unsigned char shouldClearOnEngagement : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSMutableArray *preferredLayoutConfigs;
@property (nonatomic) BOOL hasAllowedOnLockscreen;
@property (nonatomic) BOOL allowedOnLockscreen;
@property (nonatomic) BOOL hasAllowedOnHomeScreen;
@property (nonatomic) BOOL allowedOnHomeScreen;
@property (nonatomic) BOOL hasAllowedOnSpotlight;
@property (nonatomic) BOOL allowedOnSpotlight;
@property (nonatomic) BOOL hasShouldClearOnEngagement;
@property (nonatomic) BOOL shouldClearOnEngagement;

+ (Class)preferredLayoutConfigsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addPreferredLayoutConfigs:(id)a0;
- (unsigned long long)preferredLayoutConfigsCount;
- (void)clearPreferredLayoutConfigs;
- (id)preferredLayoutConfigsAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
