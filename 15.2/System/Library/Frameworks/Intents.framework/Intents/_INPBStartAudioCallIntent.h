@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBStartAudioCallIntent : PBCodable <_INPBStartAudioCallIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char audioRoute : 1; unsigned char destinationType : 1; unsigned char preferredCallProvider : 1; unsigned char recordTypeForRedialing : 1; unsigned char ttyType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int audioRoute;
@property (nonatomic) BOOL hasAudioRoute;
@property (copy, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) unsigned long long contactsCount;
@property (nonatomic) int destinationType;
@property (nonatomic) BOOL hasDestinationType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) int preferredCallProvider;
@property (nonatomic) BOOL hasPreferredCallProvider;
@property (nonatomic) int recordTypeForRedialing;
@property (nonatomic) BOOL hasRecordTypeForRedialing;
@property (copy, nonatomic) NSArray *targetContacts;
@property (readonly, nonatomic) unsigned long long targetContactsCount;
@property (nonatomic) int ttyType;
@property (nonatomic) BOOL hasTtyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)contactType;
+ (Class)targetContactsType;

- (void)addContact:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)preferredCallProviderAsString:(int)a0;
- (int)StringAsPreferredCallProvider:(id)a0;
- (id)audioRouteAsString:(int)a0;
- (int)StringAsAudioRoute:(id)a0;
- (void)clearContacts;
- (id)contactAtIndex:(unsigned long long)a0;
- (void)clearTargetContacts;
- (void)addTargetContacts:(id)a0;
- (id)targetContactsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)recordTypeForRedialingAsString:(int)a0;
- (int)StringAsRecordTypeForRedialing:(id)a0;
- (id)ttyTypeAsString:(int)a0;
- (int)StringAsTTYType:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)destinationTypeAsString:(int)a0;
- (int)StringAsDestinationType:(id)a0;
- (id)dictionaryRepresentation;

@end
