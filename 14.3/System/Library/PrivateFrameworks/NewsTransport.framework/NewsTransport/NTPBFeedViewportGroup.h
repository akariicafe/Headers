@class NSString, NTPBDate, NTPBColor, NTPBCardStyle, NSMutableArray;

@interface NTPBFeedViewportGroup : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _assetURLStringRefs;
    struct { unsigned char mergeID : 1; unsigned char options : 1; unsigned char ctaTextRef : 1; unsigned char eyebrowTextRef : 1; unsigned char l2TagIDRef : 1; unsigned char sourceIdentifierRef : 1; unsigned char subtitleRef : 1; unsigned char titleRef : 1; unsigned char type : 1; unsigned char isFirstFromEdition : 1; unsigned char usesPlaceholderHeadlines : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasSourceIdentifierRef;
@property (nonatomic) int sourceIdentifierRef;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasCreationDate;
@property (retain, nonatomic) NTPBDate *creationDate;
@property (nonatomic) BOOL hasTitleRef;
@property (nonatomic) int titleRef;
@property (nonatomic) BOOL hasSubtitleRef;
@property (nonatomic) int subtitleRef;
@property (readonly, nonatomic) BOOL hasTitleColor;
@property (retain, nonatomic) NTPBColor *titleColor;
@property (nonatomic) BOOL hasL2TagIDRef;
@property (nonatomic) int l2TagIDRef;
@property (retain, nonatomic) NSMutableArray *headlines;
@property (nonatomic) BOOL hasMergeID;
@property (nonatomic) unsigned long long mergeID;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) unsigned long long options;
@property (readonly, nonatomic) BOOL hasEditionKeyDate;
@property (retain, nonatomic) NTPBDate *editionKeyDate;
@property (readonly, nonatomic) BOOL hasEditionFeedStartDate;
@property (retain, nonatomic) NTPBDate *editionFeedStartDate;
@property (readonly, nonatomic) BOOL hasEditionFeedEndDate;
@property (retain, nonatomic) NTPBDate *editionFeedEndDate;
@property (nonatomic) BOOL hasIsFirstFromEdition;
@property (nonatomic) BOOL isFirstFromEdition;
@property (retain, nonatomic) NSMutableArray *issueIDs;
@property (readonly, nonatomic) BOOL hasBridgedGroupIdentifier;
@property (retain, nonatomic) NSString *bridgedGroupIdentifier;
@property (nonatomic) BOOL hasEyebrowTextRef;
@property (nonatomic) int eyebrowTextRef;
@property (nonatomic) BOOL hasCtaTextRef;
@property (nonatomic) int ctaTextRef;
@property (readonly, nonatomic) BOOL hasDarkStyleTitleColor;
@property (retain, nonatomic) NTPBColor *darkStyleTitleColor;
@property (readonly, nonatomic) BOOL hasCardStyle;
@property (retain, nonatomic) NTPBCardStyle *cardStyle;
@property (readonly, nonatomic) BOOL hasDarkCardStyle;
@property (retain, nonatomic) NTPBCardStyle *darkCardStyle;
@property (readonly, nonatomic) unsigned long long assetURLStringRefsCount;
@property (readonly, nonatomic) int *assetURLStringRefs;
@property (nonatomic) BOOL hasUsesPlaceholderHeadlines;
@property (nonatomic) BOOL usesPlaceholderHeadlines;

+ (Class)issueIDsType;
+ (Class)headlinesType;

- (void)addIssueIDs:(id)a0;
- (int)assetURLStringRefAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (id)issueIDsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearHeadlines;
- (unsigned long long)issueIDsCount;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)headlinesCount;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addAssetURLStringRef:(int)a0;
- (void)setAssetURLStringRefs:(int *)a0 count:(unsigned long long)a1;
- (id)headlinesAtIndex:(unsigned long long)a0;
- (void)addHeadlines:(id)a0;
- (void)clearAssetURLStringRefs;
- (void)clearIssueIDs;

@end
