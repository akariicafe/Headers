@class NSString;

@interface WFPBDailyStatusEvent : PBCodable <NSCopying> {
    struct { unsigned char appComplicationSlotsUsed : 1; unsigned char appSessionCount : 1; unsigned char averageShortcutCountPerFolder : 1; unsigned char folderCount : 1; unsigned char numberOfLargeWidgets : 1; unsigned char numberOfMediumWidgets : 1; unsigned char numberOfPersonalAutomationsEnabled : 1; unsigned char numberOfPersonalAutomationsFromSuggestionsEnabled : 1; unsigned char numberOfSmallWidgets : 1; unsigned char numberOfSuggestedAutomationsGenerated : 1; unsigned char numberOfSuggestedAutomationsGeneratedUserAlreadyHas : 1; unsigned char numberOfWidgetsOnHomeScreen : 1; unsigned char numberOfWidgetsOnLoL : 1; unsigned char shortcutComplicationSlotsUsed : 1; unsigned char shortcutRunCount : 1; unsigned char shortcutsCount : 1; unsigned char sleepShortcutsCount : 1; unsigned char uncategorizedShortcutCount : 1; unsigned char watchShortcutCount : 1; unsigned char homeAutomationsEnabled : 1; unsigned char installed : 1; unsigned char personalAutomationsEnabled : 1; unsigned char sharingEnabled : 1; unsigned char sleepEnabled : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasInstalled;
@property (nonatomic) BOOL installed;
@property (nonatomic) BOOL hasSharingEnabled;
@property (nonatomic) BOOL sharingEnabled;
@property (nonatomic) BOOL hasPersonalAutomationsEnabled;
@property (nonatomic) BOOL personalAutomationsEnabled;
@property (nonatomic) BOOL hasHomeAutomationsEnabled;
@property (nonatomic) BOOL homeAutomationsEnabled;
@property (nonatomic) BOOL hasShortcutComplicationSlotsUsed;
@property (nonatomic) unsigned int shortcutComplicationSlotsUsed;
@property (nonatomic) BOOL hasAppComplicationSlotsUsed;
@property (nonatomic) unsigned int appComplicationSlotsUsed;
@property (nonatomic) BOOL hasSleepEnabled;
@property (nonatomic) BOOL sleepEnabled;
@property (nonatomic) BOOL hasShortcutsCount;
@property (nonatomic) unsigned int shortcutsCount;
@property (nonatomic) BOOL hasFolderCount;
@property (nonatomic) unsigned int folderCount;
@property (nonatomic) BOOL hasAverageShortcutCountPerFolder;
@property (nonatomic) unsigned int averageShortcutCountPerFolder;
@property (nonatomic) BOOL hasUncategorizedShortcutCount;
@property (nonatomic) unsigned int uncategorizedShortcutCount;
@property (nonatomic) BOOL hasShortcutRunCount;
@property (nonatomic) unsigned int shortcutRunCount;
@property (nonatomic) BOOL hasAppSessionCount;
@property (nonatomic) unsigned int appSessionCount;
@property (nonatomic) BOOL hasWatchShortcutCount;
@property (nonatomic) unsigned int watchShortcutCount;
@property (nonatomic) BOOL hasSleepShortcutsCount;
@property (nonatomic) unsigned int sleepShortcutsCount;
@property (nonatomic) BOOL hasNumberOfSmallWidgets;
@property (nonatomic) unsigned int numberOfSmallWidgets;
@property (nonatomic) BOOL hasNumberOfMediumWidgets;
@property (nonatomic) unsigned int numberOfMediumWidgets;
@property (nonatomic) BOOL hasNumberOfLargeWidgets;
@property (nonatomic) unsigned int numberOfLargeWidgets;
@property (nonatomic) BOOL hasNumberOfWidgetsOnHomeScreen;
@property (nonatomic) unsigned int numberOfWidgetsOnHomeScreen;
@property (nonatomic) BOOL hasNumberOfWidgetsOnLoL;
@property (nonatomic) unsigned int numberOfWidgetsOnLoL;
@property (nonatomic) BOOL hasNumberOfPersonalAutomationsEnabled;
@property (nonatomic) unsigned int numberOfPersonalAutomationsEnabled;
@property (nonatomic) BOOL hasNumberOfPersonalAutomationsFromSuggestionsEnabled;
@property (nonatomic) unsigned int numberOfPersonalAutomationsFromSuggestionsEnabled;
@property (nonatomic) BOOL hasNumberOfSuggestedAutomationsGenerated;
@property (nonatomic) unsigned int numberOfSuggestedAutomationsGenerated;
@property (nonatomic) BOOL hasNumberOfSuggestedAutomationsGeneratedUserAlreadyHas;
@property (nonatomic) unsigned int numberOfSuggestedAutomationsGeneratedUserAlreadyHas;
@property (readonly, nonatomic) BOOL hasAutomationSuggestionsTrialIdentifier;
@property (retain, nonatomic) NSString *automationSuggestionsTrialIdentifier;

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
