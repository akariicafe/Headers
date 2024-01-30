@class NSString, NSMutableArray;

@interface BMPBPostSiriEngagementEvent : PBCodable <NSCopying> {
    struct { unsigned char pseDeltaDuration : 1; unsigned char pseDeltaSinceUIEnd : 1; unsigned char pseDeltaSinceUIStart : 1; unsigned char isPostSiriEngagement : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUiSessionId;
@property (retain, nonatomic) NSString *uiSessionId;
@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (readonly, nonatomic) BOOL hasAction;
@property (retain, nonatomic) NSString *action;
@property (nonatomic) BOOL hasIsPostSiriEngagement;
@property (nonatomic) BOOL isPostSiriEngagement;
@property (nonatomic) BOOL hasPseDeltaDuration;
@property (nonatomic) double pseDeltaDuration;
@property (nonatomic) BOOL hasPseDeltaSinceUIStart;
@property (nonatomic) double pseDeltaSinceUIStart;
@property (nonatomic) BOOL hasPseDeltaSinceUIEnd;
@property (nonatomic) double pseDeltaSinceUIEnd;
@property (retain, nonatomic) NSMutableArray *pseContents;

+ (Class)pseContentsType;

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
- (void)addPseContents:(id)a0;
- (unsigned long long)pseContentsCount;
- (void)clearPseContents;
- (id)pseContentsAtIndex:(unsigned long long)a0;

@end
