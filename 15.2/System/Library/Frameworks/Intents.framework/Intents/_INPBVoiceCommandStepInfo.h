@class NSString;

@interface _INPBVoiceCommandStepInfo : PBCodable <_INPBVoiceCommandStepInfo, NSSecureCoding, NSCopying> {
    struct { unsigned char category : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) BOOL hasApplicationIdentifier;
@property (nonatomic) int category;
@property (nonatomic) BOOL hasCategory;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)categoryAsString:(int)a0;
- (int)StringAsCategory:(id)a0;
- (id)dictionaryRepresentation;

@end
