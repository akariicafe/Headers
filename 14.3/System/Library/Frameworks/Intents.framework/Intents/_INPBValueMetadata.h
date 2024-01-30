@class NSString, _INPBConfidenceScore;

@interface _INPBValueMetadata : PBCodable <_INPBValueMetadata, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _requiredEntitlements;
    struct { unsigned char confirmed : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *canonicalValue;
@property (readonly, nonatomic) BOOL hasCanonicalValue;
@property (retain, nonatomic) _INPBConfidenceScore *confidenceScore;
@property (readonly, nonatomic) BOOL hasConfidenceScore;
@property (nonatomic) BOOL confirmed;
@property (nonatomic) BOOL hasConfirmed;
@property (copy, nonatomic) NSString *input;
@property (readonly, nonatomic) BOOL hasInput;
@property (readonly, nonatomic) int *requiredEntitlements;
@property (readonly, nonatomic) unsigned long long requiredEntitlementsCount;
@property (copy, nonatomic) NSString *source;
@property (readonly, nonatomic) BOOL hasSource;
@property (copy, nonatomic) NSString *sourceAppBundleIdentifier;
@property (readonly, nonatomic) BOOL hasSourceAppBundleIdentifier;
@property (copy, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasUuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addRequiredEntitlement:(int)a0;
- (void)setRequiredEntitlements:(int *)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)requiredEntitlementsAsString:(int)a0;
- (int)requiredEntitlementAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsRequiredEntitlements:(id)a0;
- (void)clearRequiredEntitlements;
- (void)encodeWithCoder:(id)a0;

@end
