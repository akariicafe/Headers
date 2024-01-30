@class NSString, NSMutableArray, ATXPBAppDirectoryEventMetadata;

@interface ATXPBAppDirectoryEvent : PBCodable <NSCopying> {
    struct { unsigned char bundleIndex : 1; unsigned char categoryID : 1; unsigned char categoryIndex : 1; unsigned char date : 1; unsigned char eventType : 1; unsigned char searchQueryLength : 1; unsigned char searchTab : 1; } _has;
}

@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) BOOL hasCategoryID;
@property (nonatomic) unsigned long long categoryID;
@property (nonatomic) BOOL hasCategoryIndex;
@property (nonatomic) unsigned long long categoryIndex;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasBundleIndex;
@property (nonatomic) unsigned long long bundleIndex;
@property (nonatomic) BOOL hasSearchQueryLength;
@property (nonatomic) unsigned long long searchQueryLength;
@property (nonatomic) BOOL hasSearchTab;
@property (nonatomic) unsigned long long searchTab;
@property (readonly, nonatomic) BOOL hasBlendingCacheId;
@property (retain, nonatomic) NSString *blendingCacheId;
@property (retain, nonatomic) NSMutableArray *shownSuggestionIds;
@property (retain, nonatomic) NSMutableArray *engagedSuggestionIds;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) ATXPBAppDirectoryEventMetadata *metadata;

+ (Class)shownSuggestionIdsType;
+ (Class)engagedSuggestionIdsType;

- (void)addEngagedSuggestionIds:(id)a0;
- (void)clearShownSuggestionIds;
- (unsigned long long)engagedSuggestionIdsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addShownSuggestionIds:(id)a0;
- (void)clearEngagedSuggestionIds;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)shownSuggestionIdsAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (id)engagedSuggestionIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)shownSuggestionIdsCount;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
