@class NSString;

@interface ATXPBSpotlightEventMetadata : PBCodable <NSCopying> {
    struct { unsigned char searchEngagedActionType : 1; unsigned char didSearchDuringSession : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasQueryAtEngagement;
@property (retain, nonatomic) NSString *queryAtEngagement;
@property (nonatomic) BOOL hasDidSearchDuringSession;
@property (nonatomic) BOOL didSearchDuringSession;
@property (readonly, nonatomic) BOOL hasSearchEngagedBundleId;
@property (retain, nonatomic) NSString *searchEngagedBundleId;
@property (nonatomic) BOOL hasSearchEngagedActionType;
@property (nonatomic) unsigned long long searchEngagedActionType;
@property (readonly, nonatomic) BOOL hasEngagedAppString;
@property (retain, nonatomic) NSString *engagedAppString;

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
