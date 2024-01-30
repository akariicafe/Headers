@class _INPBDateTimeRangeValue, NSArray, NSString, _INPBIntentMetadata, _INPBLocation;

@interface _INPBFindEventsIntent : PBCodable <_INPBFindEventsIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char requestedEventAttribute : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBDateTimeRangeValue *dateTimeRange;
@property (readonly, nonatomic) BOOL hasDateTimeRange;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBLocation *location;
@property (readonly, nonatomic) BOOL hasLocation;
@property (copy, nonatomic) NSArray *participants;
@property (readonly, nonatomic) unsigned long long participantsCount;
@property (nonatomic) int requestedEventAttribute;
@property (nonatomic) BOOL hasRequestedEventAttribute;
@property (copy, nonatomic) NSString *searchQuery;
@property (readonly, nonatomic) BOOL hasSearchQuery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)participantsType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)clearParticipants;
- (void)addParticipants:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)participantsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (int)StringAsRequestedEventAttribute:(id)a0;
- (id)requestedEventAttributeAsString:(int)a0;

@end
