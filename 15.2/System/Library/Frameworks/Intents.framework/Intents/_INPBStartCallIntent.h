@class _INPBCallRecordValue, NSArray, NSString, _INPBCallRecordFilter, _INPBIntentMetadata;

@interface _INPBStartCallIntent : PBCodable <_INPBStartCallIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char audioRoute : 1; unsigned char callCapability : 1; unsigned char destinationType : 1; unsigned char isGroupCall : 1; unsigned char preferredCallProvider : 1; unsigned char recordTypeForRedialing : 1; unsigned char ttyType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int audioRoute;
@property (nonatomic) BOOL hasAudioRoute;
@property (nonatomic) int callCapability;
@property (nonatomic) BOOL hasCallCapability;
@property (copy, nonatomic) NSArray *callGroups;
@property (readonly, nonatomic) unsigned long long callGroupsCount;
@property (retain, nonatomic) _INPBCallRecordFilter *callRecordFilter;
@property (readonly, nonatomic) BOOL hasCallRecordFilter;
@property (retain, nonatomic) _INPBCallRecordValue *callRecordToCallBack;
@property (readonly, nonatomic) BOOL hasCallRecordToCallBack;
@property (copy, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) unsigned long long contactsCount;
@property (nonatomic) int destinationType;
@property (nonatomic) BOOL hasDestinationType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL isGroupCall;
@property (nonatomic) BOOL hasIsGroupCall;
@property (copy, nonatomic) NSString *notificationThreadIdentifier;
@property (readonly, nonatomic) BOOL hasNotificationThreadIdentifier;
@property (nonatomic) int preferredCallProvider;
@property (nonatomic) BOOL hasPreferredCallProvider;
@property (nonatomic) int recordTypeForRedialing;
@property (nonatomic) BOOL hasRecordTypeForRedialing;
@property (nonatomic) int ttyType;
@property (nonatomic) BOOL hasTtyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)contactsType;
+ (Class)callGroupsType;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)preferredCallProviderAsString:(int)a0;
- (int)StringAsPreferredCallProvider:(id)a0;
- (id)audioRouteAsString:(int)a0;
- (int)StringAsAudioRoute:(id)a0;
- (void)clearContacts;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)recordTypeForRedialingAsString:(int)a0;
- (int)StringAsRecordTypeForRedialing:(id)a0;
- (id)ttyTypeAsString:(int)a0;
- (int)StringAsTTYType:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearCallGroups;
- (void)addCallGroups:(id)a0;
- (id)callGroupsAtIndex:(unsigned long long)a0;
- (void)addContacts:(id)a0;
- (id)contactsAtIndex:(unsigned long long)a0;
- (id)callCapabilityAsString:(int)a0;
- (int)StringAsCallCapability:(id)a0;
- (id)destinationTypeAsString:(int)a0;
- (int)StringAsDestinationType:(id)a0;
- (id)dictionaryRepresentation;

@end
