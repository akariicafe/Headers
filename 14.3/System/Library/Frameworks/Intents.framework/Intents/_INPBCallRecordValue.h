@class _INPBContactValue, _INPBDateTime, NSString, _INPBCallMetrics, _INPBInteger;

@interface _INPBCallRecordValue : PBCodable <_INPBCallRecordValue, NSSecureCoding, NSCopying> {
    struct { unsigned char callCapability : 1; unsigned char callType : 1; unsigned char preferredCallProvider : 1; unsigned char unseen : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int callCapability;
@property (nonatomic) BOOL hasCallCapability;
@property (retain, nonatomic) _INPBCallMetrics *callMetrics;
@property (readonly, nonatomic) BOOL hasCallMetrics;
@property (nonatomic) int callType;
@property (nonatomic) BOOL hasCallType;
@property (retain, nonatomic) _INPBContactValue *caller;
@property (readonly, nonatomic) BOOL hasCaller;
@property (retain, nonatomic) _INPBDateTime *dateCreated;
@property (readonly, nonatomic) BOOL hasDateCreated;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) _INPBInteger *numberOfCalls;
@property (readonly, nonatomic) BOOL hasNumberOfCalls;
@property (nonatomic) int preferredCallProvider;
@property (nonatomic) BOOL hasPreferredCallProvider;
@property (copy, nonatomic) NSString *providerId;
@property (readonly, nonatomic) BOOL hasProviderId;
@property (nonatomic) BOOL unseen;
@property (nonatomic) BOOL hasUnseen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)callTypeAsString:(int)a0;
- (int)StringAsCallType:(id)a0;
- (id)preferredCallProviderAsString:(int)a0;
- (int)StringAsPreferredCallProvider:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)callCapabilityAsString:(int)a0;
- (int)StringAsCallCapability:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
