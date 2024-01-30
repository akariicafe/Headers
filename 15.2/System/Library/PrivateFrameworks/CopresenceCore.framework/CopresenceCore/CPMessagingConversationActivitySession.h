@class NSString, CPMessagingConversationActivity;

@interface CPMessagingConversationActivitySession : PBCodable <NSCopying> {
    struct { unsigned char creationDateEpochTime : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifierUUIDString;
@property (retain, nonatomic) NSString *identifierUUIDString;
@property (readonly, nonatomic) BOOL hasActivity;
@property (retain, nonatomic) CPMessagingConversationActivity *activity;
@property (nonatomic) BOOL hasCreationDateEpochTime;
@property (nonatomic) double creationDateEpochTime;

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
