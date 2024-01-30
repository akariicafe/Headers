@class NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackConversation : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_messages;
}

@property (retain, nonatomic) NSMutableArray *messages;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)messageType;
+ (BOOL)isValid:(id)a0;

- (void)addMessage:(id)a0;
- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (unsigned long long)messagesCount;
- (void)clearMessages;
- (id)messageAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
