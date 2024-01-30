@class NSString, _INPBAppNames, _INPBIntentVocabulary, _INPBLanguageTag;

@interface _INPBLocalizedProject : PBCodable <_INPBLocalizedProject, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBAppNames *appNames;
@property (readonly, nonatomic) BOOL hasAppNames;
@property (retain, nonatomic) _INPBIntentVocabulary *intentVocabulary;
@property (readonly, nonatomic) BOOL hasIntentVocabulary;
@property (retain, nonatomic) _INPBLanguageTag *language;
@property (readonly, nonatomic) BOOL hasLanguage;
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
