@class _INPBCallGroup, NSArray, _INPBContact, NSString;

@interface _INPBCallGroupConversationFilter : PBCodable <_INPBCallGroupConversationFilter, NSSecureCoding, NSCopying> {
    struct { unsigned char matchCallerAndParticipantsExactly : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBCallGroup *callGroup;
@property (readonly, nonatomic) BOOL hasCallGroup;
@property (retain, nonatomic) _INPBContact *caller;
@property (readonly, nonatomic) BOOL hasCaller;
@property (nonatomic) BOOL matchCallerAndParticipantsExactly;
@property (nonatomic) BOOL hasMatchCallerAndParticipantsExactly;
@property (copy, nonatomic) NSArray *participants;
@property (readonly, nonatomic) unsigned long long participantsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)participantsType;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addParticipants:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearParticipants;
- (id)participantsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
