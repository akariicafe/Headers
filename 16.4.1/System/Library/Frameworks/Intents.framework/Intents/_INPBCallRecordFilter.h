@class NSArray, NSString;

@interface _INPBCallRecordFilter : PBCodable <_INPBCallRecordFilter, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _callTypes;
    struct { unsigned char callCapability : 1; unsigned char preferredCallProvider : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int callCapability;
@property (nonatomic) BOOL hasCallCapability;
@property (readonly, nonatomic) int *callTypes;
@property (readonly, nonatomic) unsigned long long callTypesCount;
@property (copy, nonatomic) NSArray *participants;
@property (readonly, nonatomic) unsigned long long participantsCount;
@property (nonatomic) int preferredCallProvider;
@property (nonatomic) BOOL hasPreferredCallProvider;
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
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)participantsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (int)StringAsCallCapability:(id)a0;
- (int)StringAsCallTypes:(id)a0;
- (int)StringAsPreferredCallProvider:(id)a0;
- (void)addCallTypes:(int)a0;
- (id)callCapabilityAsString:(int)a0;
- (id)callTypesAsString:(int)a0;
- (int)callTypesAtIndex:(unsigned long long)a0;
- (void)clearCallTypes;
- (id)preferredCallProviderAsString:(int)a0;
- (void)setCallTypes:(int *)a0 count:(unsigned long long)a1;

@end
