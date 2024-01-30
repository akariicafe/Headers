@class NSString, NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueData : PBCodable <NSCopying> {
    struct { unsigned char issueType : 1; unsigned char isBundlePaid : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIssueId;
@property (retain, nonatomic) NSString *issueId;
@property (nonatomic) BOOL hasIsBundlePaid;
@property (nonatomic) BOOL isBundlePaid;
@property (nonatomic) BOOL hasIssueType;
@property (nonatomic) int issueType;
@property (retain, nonatomic) NSMutableArray *topicIds;

+ (Class)topicIdsType;

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
- (void)addTopicIds:(id)a0;
- (void)clearTopicIds;
- (unsigned long long)topicIdsCount;
- (id)topicIdsAtIndex:(unsigned long long)a0;
- (id)issueTypeAsString:(int)a0;
- (int)StringAsIssueType:(id)a0;

@end
