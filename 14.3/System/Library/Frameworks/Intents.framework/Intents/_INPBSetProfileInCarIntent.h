@class NSString, _INPBInteger, _INPBDataString, _INPBString, _INPBIntentMetadata;

@interface _INPBSetProfileInCarIntent : PBCodable <_INPBSetProfileInCarIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char defaultProfile : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBDataString *carName;
@property (readonly, nonatomic) BOOL hasCarName;
@property (nonatomic) BOOL defaultProfile;
@property (nonatomic) BOOL hasDefaultProfile;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBString *profileName;
@property (readonly, nonatomic) BOOL hasProfileName;
@property (retain, nonatomic) _INPBInteger *profileNumber;
@property (readonly, nonatomic) BOOL hasProfileNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
