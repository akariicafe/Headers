@class NSString;

@interface ATXPBProactiveSuggestionClientModelSpecification : PBCodable <NSCopying> {
    struct { unsigned char engagementResetPolicy : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) BOOL hasClientModelVersion;
@property (retain, nonatomic) NSString *clientModelVersion;
@property (nonatomic) BOOL hasEngagementResetPolicy;
@property (nonatomic) int engagementResetPolicy;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)engagementResetPolicyAsString:(int)a0;
- (int)StringAsEngagementResetPolicy:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
