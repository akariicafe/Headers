@class NSString;

@interface CPMessagingConversationActivityContext : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasContextIdentifier;
@property (retain, nonatomic) NSString *contextIdentifier;
@property (readonly, nonatomic) BOOL hasActionDescription;
@property (retain, nonatomic) NSString *actionDescription;
@property (readonly, nonatomic) BOOL hasOngoingDescription;
@property (retain, nonatomic) NSString *ongoingDescription;
@property (readonly, nonatomic) BOOL hasCompletedDescription;
@property (retain, nonatomic) NSString *completedDescription;

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
