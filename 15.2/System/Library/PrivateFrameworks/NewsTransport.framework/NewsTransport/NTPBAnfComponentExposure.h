@class NTPBIssueViewData, NSString, NTPBIssueExposureData, NTPBIssueData, NSData, NSMutableArray;

@interface NTPBAnfComponentExposure : PBCodable <NSCopying> {
    struct { unsigned char backendArticleVersionInt64 : 1; unsigned char publisherArticleVersionInt64 : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (readonly, nonatomic) BOOL hasAnfComponentType;
@property (retain, nonatomic) NSString *anfComponentType;
@property (readonly, nonatomic) BOOL hasAnfComponentId;
@property (retain, nonatomic) NSString *anfComponentId;
@property (readonly, nonatomic) BOOL hasAnfComponentRole;
@property (retain, nonatomic) NSString *anfComponentRole;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) NSString *metadata;
@property (readonly, nonatomic) BOOL hasArticleVersion;
@property (retain, nonatomic) NSString *articleVersion;
@property (nonatomic) BOOL hasPublisherArticleVersionInt64;
@property (nonatomic) long long publisherArticleVersionInt64;
@property (nonatomic) BOOL hasBackendArticleVersionInt64;
@property (nonatomic) long long backendArticleVersionInt64;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (readonly, nonatomic) BOOL hasIssueExposureData;
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData;
@property (readonly, nonatomic) BOOL hasIssueViewData;
@property (retain, nonatomic) NTPBIssueViewData *issueViewData;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (retain, nonatomic) NSMutableArray *fractionalCohortMemberships;

+ (Class)fractionalCohortMembershipType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addFractionalCohortMembership:(id)a0;
- (void)clearFractionalCohortMemberships;
- (unsigned long long)fractionalCohortMembershipsCount;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)a0;

@end
