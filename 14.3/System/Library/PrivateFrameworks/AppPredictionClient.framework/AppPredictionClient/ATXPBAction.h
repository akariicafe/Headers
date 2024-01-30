@class NSString, NSData, ATXPBActionCriteria, ATXPBAVRouteInfo, NSMutableArray;

@interface ATXPBAction : PBCodable <NSCopying> {
    struct { unsigned char actionType : 1; unsigned char userActivityHash : 1; unsigned char isFutureMedia : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasActionType;
@property (nonatomic) long long actionType;
@property (readonly, nonatomic) BOOL hasIntent;
@property (retain, nonatomic) NSData *intent;
@property (readonly, nonatomic) BOOL hasHeuristic;
@property (retain, nonatomic) NSString *heuristic;
@property (nonatomic) BOOL hasIsFutureMedia;
@property (nonatomic) BOOL isFutureMedia;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL hasUserActivityHash;
@property (nonatomic) long long userActivityHash;
@property (readonly, nonatomic) BOOL hasActivityString;
@property (retain, nonatomic) NSString *activityString;
@property (readonly, nonatomic) BOOL hasUserActivityProxy;
@property (retain, nonatomic) NSData *userActivityProxy;
@property (readonly, nonatomic) BOOL hasItemIdentifier;
@property (retain, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) BOOL hasContentAttributeSet;
@property (retain, nonatomic) NSData *contentAttributeSet;
@property (readonly, nonatomic) BOOL hasCriteria;
@property (retain, nonatomic) ATXPBActionCriteria *criteria;
@property (readonly, nonatomic) BOOL hasRouteInfo;
@property (retain, nonatomic) ATXPBAVRouteInfo *routeInfo;
@property (retain, nonatomic) NSMutableArray *heuristicMetadatas;

+ (Class)heuristicMetadataType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addHeuristicMetadata:(id)a0;
- (unsigned long long)heuristicMetadatasCount;
- (void)clearHeuristicMetadatas;
- (id)heuristicMetadataAtIndex:(unsigned long long)a0;

@end
