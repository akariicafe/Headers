@class NSArray, NSString, _INPBString;

@interface _INPBEvent : PBCodable <_INPBEvent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *eventDescriptors;
@property (readonly, nonatomic) unsigned long long eventDescriptorsCount;
@property (retain, nonatomic) _INPBString *eventType;
@property (readonly, nonatomic) BOOL hasEventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)eventDescriptorsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearEventDescriptors;
- (void)addEventDescriptors:(id)a0;
- (id)eventDescriptorsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
