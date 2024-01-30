@class NSString, INCodableEnum, NSArray;

@interface INCodableEnumValue : NSObject <INCodableAttributeRelationComparing, NSSecureCoding, NSCopying, INCodableCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic, setter=_setCodableEnum:) INCodableEnum *_codableEnum;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *displayNameLocID;
@property (retain, nonatomic) NSArray *synonyms;
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)localizedDisplayNameForLanguage:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)__INCodableEnumIndexKey;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_intents_compareValue:(id)a0 relation:(unsigned long long)a1;
- (id)dictionaryRepresentation;
- (id)__INCodableEnumDisplayNameIDKey;
- (id)__INCodableEnumSynonymsKey;
- (id)__INCodableEnumNameKey;
- (BOOL)isEqual:(id)a0;
- (id)localizedDisplayNameWithLocalizer:(id)a0;
- (id)__INCodableEnumDisplayNameKey;
- (void).cxx_destruct;

@end
