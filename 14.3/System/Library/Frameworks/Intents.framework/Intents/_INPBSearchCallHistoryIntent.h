@class _INPBDateTimeRange, _INPBContact, NSString, _INPBIntentMetadata;

@interface _INPBSearchCallHistoryIntent : PBCodable <_INPBSearchCallHistoryIntent, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _callCapabilities;
    struct { int *list; unsigned long long count; unsigned long long size; } _callTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _capabilities;
    struct { unsigned char callType : 1; unsigned char preferredCallProvider : 1; unsigned char unseen : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int *callCapabilities;
@property (readonly, nonatomic) unsigned long long callCapabilitiesCount;
@property (nonatomic) int callType;
@property (nonatomic) BOOL hasCallType;
@property (readonly, nonatomic) int *callTypes;
@property (readonly, nonatomic) unsigned long long callTypesCount;
@property (readonly, nonatomic) int *capabilities;
@property (readonly, nonatomic) unsigned long long capabilitiesCount;
@property (retain, nonatomic) _INPBDateTimeRange *dateCreated;
@property (readonly, nonatomic) BOOL hasDateCreated;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) int preferredCallProvider;
@property (nonatomic) BOOL hasPreferredCallProvider;
@property (retain, nonatomic) _INPBContact *recipient;
@property (readonly, nonatomic) BOOL hasRecipient;
@property (retain, nonatomic) _INPBContact *targetContact;
@property (readonly, nonatomic) BOOL hasTargetContact;
@property (nonatomic) BOOL unseen;
@property (nonatomic) BOOL hasUnseen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)clearCallTypes;
- (void)clearCallCapabilities;
- (void)addCallCapabilities:(int)a0;
- (int)callCapabilitiesAtIndex:(unsigned long long)a0;
- (void)setCallCapabilities:(int *)a0 count:(unsigned long long)a1;
- (id)callCapabilitiesAsString:(int)a0;
- (int)StringAsCallCapabilities:(id)a0;
- (id)callTypeAsString:(int)a0;
- (int)StringAsCallType:(id)a0;
- (void)addCallTypes:(int)a0;
- (int)callTypesAtIndex:(unsigned long long)a0;
- (void)setCallTypes:(int *)a0 count:(unsigned long long)a1;
- (id)callTypesAsString:(int)a0;
- (int)StringAsCallTypes:(id)a0;
- (void)clearCapabilities;
- (void)addCapabilities:(int)a0;
- (int)capabilitiesAtIndex:(unsigned long long)a0;
- (void)setCapabilities:(int *)a0 count:(unsigned long long)a1;
- (id)capabilitiesAsString:(int)a0;
- (int)StringAsCapabilities:(id)a0;
- (id)preferredCallProviderAsString:(int)a0;
- (int)StringAsPreferredCallProvider:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
