@class NSString, NSData;

@interface DRSProtoRequestDescription : PBCodable <NSCopying> {
    struct { unsigned char requestTime : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTeamId;
@property (retain, nonatomic) NSString *teamId;
@property (readonly, nonatomic) BOOL hasIssueCategory;
@property (retain, nonatomic) NSString *issueCategory;
@property (readonly, nonatomic) BOOL hasContextDictionaryData;
@property (retain, nonatomic) NSData *contextDictionaryData;
@property (nonatomic) BOOL hasRequestTime;
@property (nonatomic) unsigned long long requestTime;
@property (readonly, nonatomic) BOOL hasBuild;
@property (retain, nonatomic) NSString *build;

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
