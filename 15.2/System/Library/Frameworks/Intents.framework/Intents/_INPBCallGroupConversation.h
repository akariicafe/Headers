@class _INPBContactValue, NSString, _INPBCallGroup, NSArray;

@interface _INPBCallGroupConversation : PBCodable <_INPBCallGroupConversation, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBCallGroup *callGroup;
@property (readonly, nonatomic) BOOL hasCallGroup;
@property (retain, nonatomic) _INPBContactValue *caller;
@property (readonly, nonatomic) BOOL hasCaller;
@property (copy, nonatomic) NSString *conversationId;
@property (readonly, nonatomic) BOOL hasConversationId;
@property (copy, nonatomic) NSArray *otherParticipants;
@property (readonly, nonatomic) unsigned long long otherParticipantsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)otherParticipantsType;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearOtherParticipants;
- (void)addOtherParticipants:(id)a0;
- (id)otherParticipantsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
