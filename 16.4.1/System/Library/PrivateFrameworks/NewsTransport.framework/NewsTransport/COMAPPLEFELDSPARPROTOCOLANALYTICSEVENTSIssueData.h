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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsIssueType:(id)a0;
- (void)addTopicIds:(id)a0;
- (void)clearTopicIds;
- (id)issueTypeAsString:(int)a0;
- (id)topicIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicIdsCount;

@end
