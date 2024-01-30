@class NSString;

@interface WebAVMediaSelectionOption : NSObject {
    struct RetainPtr<NSString> { void *m_ptr; } _localizedDisplayName;
}

@property (readonly, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) NSString *mediaType;

- (id)commonMetadata;
- (id)propertyList;
- (BOOL)isPlayable;
- (id)metadataForFormat:(id)a0;
- (id)extendedLanguageTag;
- (id)languageCode;
- (id).cxx_construct;
- (id)availableMetadataFormats;
- (void).cxx_destruct;
- (id)locale;
- (id)outOfBandSource;
- (BOOL)_isDesignatedDefault;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;
- (id)displayNameWithLocale:(id)a0;
- (BOOL)hasMediaCharacteristic:(id)a0;
- (id)mediaCharacteristics;
- (id)mediaSubTypes;
- (id)outOfBandIdentifier;
- (id)track;
- (id)initWithMediaType:(id)a0 displayName:(id)a1;

@end
