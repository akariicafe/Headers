@class NSData, NSString;

@interface NTPBInAppWebEmbedExposure : PBCodable <NSCopying> {
    struct { unsigned char articleDisplayRankInGroup : 1; unsigned char displayRank : 1; unsigned char feedType : 1; unsigned char groupType : 1; unsigned char moduleEventType : 1; unsigned char moduleItemCount : 1; unsigned char moduleItemPosition : 1; unsigned char moduleLocation : 1; unsigned char webEmbedLocation : 1; } _has;
}

@property (nonatomic) BOOL hasModuleEventType;
@property (nonatomic) int moduleEventType;
@property (nonatomic) BOOL hasModuleLocation;
@property (nonatomic) int moduleLocation;
@property (nonatomic) BOOL hasModuleItemCount;
@property (nonatomic) int moduleItemCount;
@property (readonly, nonatomic) BOOL hasModuleExposureId;
@property (retain, nonatomic) NSData *moduleExposureId;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) BOOL hasWebEmbedLocation;
@property (nonatomic) int webEmbedLocation;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic) BOOL hasModuleItemPosition;
@property (nonatomic) int moduleItemPosition;
@property (readonly, nonatomic) BOOL hasWebEmbedId;
@property (retain, nonatomic) NSString *webEmbedId;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) int groupType;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) int feedType;
@property (nonatomic) BOOL hasDisplayRank;
@property (nonatomic) int displayRank;
@property (nonatomic) BOOL hasArticleDisplayRankInGroup;
@property (nonatomic) int articleDisplayRankInGroup;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)moduleEventTypeAsString:(int)a0;
- (int)StringAsModuleEventType:(id)a0;
- (id)moduleLocationAsString:(int)a0;
- (int)StringAsModuleLocation:(id)a0;
- (id)webEmbedLocationAsString:(int)a0;
- (int)StringAsWebEmbedLocation:(id)a0;
- (id)groupTypeAsString:(int)a0;
- (int)StringAsGroupType:(id)a0;
- (id)feedTypeAsString:(int)a0;
- (int)StringAsFeedType:(id)a0;

@end
