@class _INPBDateTimeRange, _INPBDataStringList, _INPBStringList, NSString, _INPBIntentMetadata, _INPBContactList;

@interface _INPBSearchForMessagesIntent : PBCodable <_INPBSearchForMessagesIntent, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _attributes;
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int *attributes;
@property (readonly, nonatomic) unsigned long long attributesCount;
@property (retain, nonatomic) _INPBStringList *content;
@property (readonly, nonatomic) BOOL hasContent;
@property (retain, nonatomic) _INPBStringList *conversationIdentifier;
@property (readonly, nonatomic) BOOL hasConversationIdentifier;
@property (retain, nonatomic) _INPBDateTimeRange *dateTimeRange;
@property (readonly, nonatomic) BOOL hasDateTimeRange;
@property (retain, nonatomic) _INPBStringList *groupName;
@property (readonly, nonatomic) BOOL hasGroupName;
@property (retain, nonatomic) _INPBStringList *identifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBStringList *notificationIdentifier;
@property (readonly, nonatomic) BOOL hasNotificationIdentifier;
@property (retain, nonatomic) _INPBContactList *recipient;
@property (readonly, nonatomic) BOOL hasRecipient;
@property (retain, nonatomic) _INPBStringList *searchTerm;
@property (readonly, nonatomic) BOOL hasSearchTerm;
@property (retain, nonatomic) _INPBContactList *sender;
@property (readonly, nonatomic) BOOL hasSender;
@property (retain, nonatomic) _INPBDataStringList *speakableGroupName;
@property (readonly, nonatomic) BOOL hasSpeakableGroupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void)clearAttributes;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)addAttribute:(int)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (int)attributeAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (int)StringAsAttributes:(id)a0;
- (id)attributesAsString:(int)a0;
- (void)setAttributes:(int *)a0 count:(unsigned long long)a1;

@end
