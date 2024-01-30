@class NSString, NSDictionary, NSArray, AVAssetWriterInput;

@interface AVAssetWriterInputSelectionOption : AVMediaSelectionOption {
    BOOL _enabled;
}

@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) NSDictionary *outputSettings;
@property (readonly, nonatomic) struct opaqueCMFormatDescription { } *sourceFormatHint;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSString *extendedLanguageTag;
@property (readonly, nonatomic) NSArray *metadata;
@property (readonly, nonatomic) NSDictionary *trackReferences;
@property (readonly, nonatomic) BOOL displaysNonForcedSubtitles;
@property (readonly, nonatomic) AVAssetWriterInput *input;

+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)a0 displaysNonForcedSubtitles:(BOOL)a1;
+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)a0;

- (id)locale;
- (id)availableMetadataFormats;
- (id)propertyList;
- (void)dealloc;
- (id)initWithAssetWriterInput:(id)a0;
- (id)_taggedCharacteristics;
- (BOOL)_isAuxiliaryContent;
- (BOOL)_isDesignatedDefault;
- (id)_ancillaryDescription;
- (id)initWithAssetWriterInput:(id)a0 displaysNonForcedSubtitles:(BOOL)a1;
- (BOOL)_hasEqualValueForKey:(id)a0 asObject:(id)a1;
- (id)mediaSubTypes;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;
- (id)metadataForFormat:(id)a0;
- (id)commonMetadata;
- (BOOL)isPlayable;

@end
