@class AVMetadataItemInternal, NSString, NSDictionary, NSData, NSDate, NSNumber, NSLocale;
@protocol NSObject, NSCopying;

@interface AVMetadataItem : NSObject <AVAsynchronousKeyValueLoading, NSCopying, NSMutableCopying> {
    AVMetadataItemInternal *_priv;
}

@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSNumber *numberValue;
@property (readonly, nonatomic) NSDate *dateValue;
@property (readonly, nonatomic) NSData *dataValue;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *extendedLanguageTag;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, copy, nonatomic) NSString *dataType;
@property (readonly, copy, nonatomic) id<NSObject, NSCopying> value;
@property (readonly, copy, nonatomic) NSDictionary *extraAttributes;

+ (void)initialize;
+ (id)identifierForKey:(id)a0 keySpace:(id)a1;
+ (id)keySpaceForIdentifier:(id)a0;
+ (id)keyForIdentifier:(id)a0;
+ (id)metadataItemsFromArray:(id)a0 filteredAndSortedAccordingToPreferredLanguages:(id)a1;
+ (id)_metadataItemWithFigMetadataDictionary:(id)a0 containerURL:(id)a1 securityOptions:(unsigned int)a2;
+ (id)metadataItemsFromArray:(id)a0 withKey:(id)a1 keySpace:(id)a2;
+ (id)_isoUserDataKeysRequiringKeySpaceConversion;
+ (BOOL)_clientExpectsISOUserDataKeysInQuickTimeUserDataKeySpace;
+ (id)metadataItemsFromArray:(id)a0 withLocale:(id)a1;
+ (id)_replaceQuickTimeUserDataKeySpaceWithISOUserDataKeySpaceIfRequired:(id)a0;
+ (id)dataTypeForValue:(id)a0;
+ (id)metadataItemsFromArray:(id)a0 filteredByIdentifier:(id)a1;
+ (id)metadataItemsFromArray:(id)a0 withStringValue:(id)a1;
+ (id)metadataItemsFromArray:(id)a0 filteredByMetadataItemFilter:(id)a1;
+ (id)_metadataItemWithFigMetadataDictionary:(id)a0;
+ (id)_figMetadataPropertyFromMetadataItems:(id)a0;
+ (id)metadataItemWithPropertiesOfMetadataItem:(id)a0 valueLoadingHandler:(id /* block */)a1;
+ (id)metadataItemsFromArray:(id)a0 filteredByIdentifiers:(id)a1;

- (id)keySpace;
- (void)_updateIdentifier;
- (struct CGImage { } *)imageValue;
- (id)commonKey;
- (id)_keyAsString;
- (id)discoveryTimestamp;
- (void)_extractPropertiesFromDictionary:(id)a0;
- (id)_valueFromCFType:(void *)a0;
- (void)_updateCommonKey;
- (void)_makeValueReady;
- (void)_makePropertiesReady;
- (void)_updateLanguageInformationFromLocale:(id)a0;
- (id)unicodeLanguageIdentifier;
- (void)_updateLanguageInformationFromExtendedLanguageTag:(id)a0;
- (id)unicodeLanguageCode;
- (id)_initWithFigMetadataDictionary:(id)a0;
- (id)_figMetadataDictionary;
- (id)_serializationDataType;
- (id)intrinsicAttributesOfExtraAttributes:(id)a0;
- (BOOL)_areExtraAttributesOf:(id)a0 comparableToExtraAttributesOf:(id)a1;
- (void *)_copyValueAsCFTypeWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 error:(id *)a1;
- (id)_figMetadataDictionaryWithValue:(BOOL)a0 diviningValueDataType:(BOOL)a1;
- (id)_conformingDataTypes;
- (id)_createJSONEncodedDataFromValue:(id)a0 error:(id *)a1;
- (id)_figMetadataFormat;
- (id)_initWithReader:(struct OpaqueFigMetadataReader { } *)a0 itemIndex:(long long)a1;
- (id)_figMetadataSpecificationReturningError:(id *)a0;
- (id)startDate;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)key;
- (id)description;
- (void)cancelLoading;
- (id)languageCode;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)hash;
- (void)dealloc;

@end
