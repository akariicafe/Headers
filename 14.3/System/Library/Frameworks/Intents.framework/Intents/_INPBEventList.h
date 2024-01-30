@class NSArray, _INPBCondition, NSString;

@interface _INPBEventList : PBCodable <_INPBEventList, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBCondition *condition;
@property (readonly, nonatomic) BOOL hasCondition;
@property (copy, nonatomic) NSArray *events;
@property (readonly, nonatomic) unsigned long long eventsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)eventType;

- (void)addEvent:(id)a0;
- (id)eventAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearEvents;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
