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

@end
