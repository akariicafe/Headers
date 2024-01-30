@class NSString, NSArray, NSData, _SFPBURL;

@interface _SFPBCard : PBCodable <_SFPBCard, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (nonatomic) int type;
@property (copy) NSArray *cardSections;
@property (copy, nonatomic) NSData *intentMessageData;
@property (copy, nonatomic) NSString *intentMessageName;
@property (copy, nonatomic) NSData *intentResponseMessageData;
@property (copy, nonatomic) NSString *intentResponseMessageName;
@property (copy, nonatomic) NSArray *dismissalCommands;
@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSString *contextReferenceIdentifier;
@property (retain, nonatomic) _SFPBURL *urlValue;
@property (nonatomic) int source;
@property (copy, nonatomic) NSData *entityIdentifier;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) unsigned long long queryId;
@property (copy, nonatomic) NSString *fbr;
@property (nonatomic) BOOL flexibleSectionOrder;
@property (copy, nonatomic) NSArray *entityProtobufMessages;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addCardSections:(id)a0;
- (void)clearCardSections;
- (unsigned long long)cardSectionsCount;
- (id)cardSectionsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)addDismissalCommands:(id)a0;
- (void)addEntityProtobufMessages:(id)a0;
- (void)clearDismissalCommands;
- (unsigned long long)dismissalCommandsCount;
- (id)dismissalCommandsAtIndex:(unsigned long long)a0;
- (void)clearEntityProtobufMessages;
- (unsigned long long)entityProtobufMessagesCount;
- (id)entityProtobufMessagesAtIndex:(unsigned long long)a0;
- (id)initWithFacade:(id)a0;

@end
