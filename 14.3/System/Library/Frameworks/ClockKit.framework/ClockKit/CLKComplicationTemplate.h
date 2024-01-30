@class UIColor, NSDictionary, NSHashTable, NSDate;

@interface CLKComplicationTemplate : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_metadata;
    NSHashTable *_activeClients;
    BOOL _finalizing;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasSubMinuteUpdateRate;
@property (readonly, nonatomic) long long timeTravelUpdateFrequency;
@property (readonly, nonatomic, getter=isLinkedOnOrAfterGrace) BOOL linkedOnOrAfterGrace;
@property (nonatomic) BOOL renderForPreviews;
@property (readonly, nonatomic) long long compatibleFamily;
@property (readonly, nonatomic) BOOL finalized;
@property (readonly, nonatomic) BOOL usesSwiftUI;
@property (readonly, nonatomic) BOOL needsSerializableCopy;
@property (nonatomic, setter=setUISensitivity:) long long uiSensitivity;
@property (readonly, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) UIColor *tintColor;

+ (id)new;
+ (id)complicationTemplateWithJSONObjectRepresentation:(id)a0 bundle:(id)a1 purpose:(unsigned long long)a2;
+ (BOOL)dictionaryIsCompatibleWithJSONSerialization:(id)a0;
+ (id)classesCompatibleWithJSONSerialization;
+ (id)_secureCodingRepresentationOfEmbeddedObjectsDictionary:(id)a0 bundlePath:(id)a1;
+ (id)createJSONRepresentationFromDictionary:(id)a0 bundlePath:(id)a1 purpose:(unsigned long long)a2;
+ (id)objectFromJSON:(id)a0 bundle:(id)a1;
+ (id)_secureCodingRepresentationOfValue:(id)a0 bundlePath:(id)a1;
+ (id)_secureCodingRepresentationOfEmbeddedObjectsArray:(id)a0 bundlePath:(id)a1;
+ (BOOL)classIsCompatibleWithJSONSerialization:(Class)a0;
+ (id)_jsonRepresentationFromValue:(id)a0 bundlePath:(id)a1 purpose:(unsigned long long)a2;
+ (Class)_superClassFromCompatibleJSONSerializationClass:(Class)a0;
+ (BOOL)_arrayIsCompatibleWithJSONSerialization:(id)a0;
+ (id)_createJSONRepresentationFromArray:(id)a0 bundlePath:(id)a1 purpose:(unsigned long long)a2;
+ (id)_jsonObjectRepresentationFromObject:(id)a0 bundlePath:(id)a1 purpose:(unsigned long long)a2;

- (BOOL)validateWithError:(id *)a0;
- (void)setMetadata:(id)a0;
- (id)initPrivate;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)metadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)finalize;
- (void)encodeWithCoder:(id)a0;
- (id)finalizedCopy;
- (BOOL)isCompatibleWithFamily:(long long)a0;
- (void)enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)a0 purpose:(unsigned long long)a1;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)a0;
- (void)enumerateImageProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateEmbeddedTemplateKeysWithBlock:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })maxSizeForImageProviderKey:(id)a0;
- (void)endUpdatesForClient:(id)a0;
- (void)beginUpdatesForClient:(id)a0;
- (void)_setProvidersPaused:(BOOL)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateProgressProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)a0;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)a0;
- (void)_enumerateFloatKeysWithBlock:(id /* block */)a0;
- (BOOL)_validateSwiftUIViewForKey:(id)a0 withMaxSize:(struct CGSize { double x0; double x1; })a1 cornerRadius:(double)a2 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 error:(id *)a4;
- (id)viewDataForSwiftUIViewKey:(id)a0;
- (void)_enumerateSwiftUIViewKeysWithBlock:(id /* block */)a0;
- (Class)finalizedCopyClass;
- (void)_finalizeSwiftUIViewForKey:(id)a0 withMaxSize:(struct CGSize { double x0; double x1; })a1 cornerRadius:(double)a2 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3;
- (void)_enumerateBOOLKeysWithBlock:(id /* block */)a0;
- (void)_enumerateDateKeysWithBlock:(id /* block */)a0;
- (void)_enumerateAllBasicKeysWithBlock:(id /* block */)a0;
- (void)_setCustomCopyPropertiesOn:(id)a0 finalizing:(BOOL)a1;
- (id)_validEmbeddedTemplateClassNamesForKey:(id)a0;
- (id)initPrivateWithJSONObjectRepresentation:(id)a0 bundle:(id)a1;
- (void)_enumerateScalarKeysWithBlock:(id /* block */)a0;
- (id)viewDataKeyForSwiftUIViewKey:(id)a0;
- (id)serializableCopyWithImageProviders:(id)a0;
- (void)enumerateProgressProviderKeysWithBlock:(id /* block */)a0;
- (void)enumerateEmbeddedTemplateKeysWithBlock:(id /* block */)a0;
- (void)enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)a0;

@end
