@class NSString, BCSChatSuggestMessage;

@interface BCSChatSuggestWrapper : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPhone;
@property (retain, nonatomic) NSString *phone;
@property (readonly, nonatomic) BOOL hasMessage;
@property (retain, nonatomic) BCSChatSuggestMessage *message;

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
