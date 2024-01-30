@class NSString, ACHCodableColor, NSMutableArray, ACHCodableTemplate;

@interface ACHCodableAchievement : PBCodable <NSCopying> {
    struct { unsigned char badgeModelVersion : 1; unsigned char goalValue : 1; unsigned char progressValue : 1; unsigned char badgeUsesFullColorEnamel : 1; unsigned char badgeUsesTriColorEnamel : 1; unsigned char faceHasMetalInlay : 1; unsigned char unearnedUsesTwoToneEnamel : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAchievementTemplate;
@property (retain, nonatomic) ACHCodableTemplate *achievementTemplate;
@property (retain, nonatomic) NSMutableArray *earnedInstances;
@property (readonly, nonatomic) BOOL hasLocalizationBundleURL;
@property (retain, nonatomic) NSString *localizationBundleURL;
@property (readonly, nonatomic) BOOL hasResourceBundleURL;
@property (retain, nonatomic) NSString *resourceBundleURL;
@property (readonly, nonatomic) BOOL hasStickerBundleURL;
@property (retain, nonatomic) NSString *stickerBundleURL;
@property (readonly, nonatomic) BOOL hasBadgeShapeName;
@property (retain, nonatomic) NSString *badgeShapeName;
@property (readonly, nonatomic) BOOL hasBadgeMetalColor;
@property (retain, nonatomic) ACHCodableColor *badgeMetalColor;
@property (nonatomic) BOOL hasBadgeUsesFullColorEnamel;
@property (nonatomic) BOOL badgeUsesFullColorEnamel;
@property (readonly, nonatomic) BOOL hasBadgeEnamelColor;
@property (retain, nonatomic) ACHCodableColor *badgeEnamelColor;
@property (readonly, nonatomic) BOOL hasPropertyListBundleURL;
@property (retain, nonatomic) NSString *propertyListBundleURL;
@property (nonatomic) BOOL hasProgressValue;
@property (nonatomic) double progressValue;
@property (readonly, nonatomic) BOOL hasProgressUnitString;
@property (retain, nonatomic) NSString *progressUnitString;
@property (nonatomic) BOOL hasGoalValue;
@property (nonatomic) double goalValue;
@property (readonly, nonatomic) BOOL hasGoalUnitString;
@property (retain, nonatomic) NSString *goalUnitString;
@property (retain, nonatomic) NSMutableArray *customPlaceholderValues;
@property (readonly, nonatomic) BOOL hasTextureFilename;
@property (retain, nonatomic) NSString *textureFilename;
@property (nonatomic) BOOL hasUnearnedUsesTwoToneEnamel;
@property (nonatomic) BOOL unearnedUsesTwoToneEnamel;
@property (readonly, nonatomic) BOOL hasSection;
@property (retain, nonatomic) NSString *section;
@property (nonatomic) BOOL hasFaceHasMetalInlay;
@property (nonatomic) BOOL faceHasMetalInlay;
@property (nonatomic) BOOL hasBadgeUsesTriColorEnamel;
@property (nonatomic) BOOL badgeUsesTriColorEnamel;
@property (readonly, nonatomic) BOOL hasEnamelTriColor1;
@property (retain, nonatomic) ACHCodableColor *enamelTriColor1;
@property (readonly, nonatomic) BOOL hasEnamelTriColor2;
@property (retain, nonatomic) ACHCodableColor *enamelTriColor2;
@property (readonly, nonatomic) BOOL hasEnamelTriColor3;
@property (retain, nonatomic) ACHCodableColor *enamelTriColor3;
@property (nonatomic) BOOL hasBadgeModelVersion;
@property (nonatomic) long long badgeModelVersion;

+ (Class)earnedInstancesType;
+ (Class)customPlaceholderValuesType;

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
- (void)addEarnedInstances:(id)a0;
- (void)addCustomPlaceholderValues:(id)a0;
- (unsigned long long)earnedInstancesCount;
- (void)clearEarnedInstances;
- (id)earnedInstancesAtIndex:(unsigned long long)a0;
- (unsigned long long)customPlaceholderValuesCount;
- (void)clearCustomPlaceholderValues;
- (id)customPlaceholderValuesAtIndex:(unsigned long long)a0;

@end
