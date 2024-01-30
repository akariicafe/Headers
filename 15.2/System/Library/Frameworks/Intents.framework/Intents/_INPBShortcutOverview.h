@class NSArray, NSString, _INPBDataString, _INPBImageValue;

@interface _INPBShortcutOverview : PBCodable <_INPBShortcutOverview, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBDataString *descriptiveText;
@property (readonly, nonatomic) BOOL hasDescriptiveText;
@property (retain, nonatomic) _INPBImageValue *icon;
@property (readonly, nonatomic) BOOL hasIcon;
@property (retain, nonatomic) _INPBDataString *name;
@property (readonly, nonatomic) BOOL hasName;
@property (copy, nonatomic) NSArray *steps;
@property (readonly, nonatomic) unsigned long long stepsCount;
@property (retain, nonatomic) _INPBDataString *voiceCommand;
@property (readonly, nonatomic) BOOL hasVoiceCommand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)stepsType;

- (void)encodeWithCoder:(id)a0;
- (id)stepsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addSteps:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearSteps;
- (id)dictionaryRepresentation;

@end
