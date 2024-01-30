@class NSString, NSArray, NSLocale, AVMediaSelectionOptionInternal;

@interface AVMediaSelectionOption : NSObject <NSCopying> {
    AVMediaSelectionOptionInternal *_mediaSelectionOption;
}

@property (readonly, nonatomic) int trackID;
@property (readonly, nonatomic) NSString *unicodeLanguageIdentifier;
@property (readonly, nonatomic) NSString *unicodeLanguageCode;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) NSArray *mediaSubTypes;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;
@property (readonly, nonatomic) NSString *extendedLanguageTag;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSArray *commonMetadata;
@property (readonly, nonatomic) NSArray *availableMetadataFormats;
@property (readonly, nonatomic) NSString *displayName;

+ (id)mediaSelectionOptionForAsset:(id)a0 group:(id)a1 dictionary:(id)a2 hasUnderlyingTrack:(BOOL)a3;
+ (BOOL)_plistHasOptionIdentifier:(id)a0;
+ (id)mediaSelectionNilOptionForGroup:(id)a0;

- (id)group;
- (id)_title;
- (id)track;
- (id)_track;
- (id)propertyList;
- (id)fallbackIDs;
- (id)optionID;
- (id)_groupMediaCharacteristics;
- (id)_groupMediaType;
- (id)outOfBandIdentifier;
- (id)outOfBandSource;
- (id)_taggedMediaCharacteristics;
- (id)associatedExtendedLanguageTag;
- (id)associatedPersistentIDs;
- (BOOL)_isMainProgramContent;
- (id)associatedUnicodeLanguageIdentifier;
- (id)displayNameWithLocale:(id)a0;
- (id)_preferredMetadataTitleAccordingToPreferredLanguages:(id)a0 fallingBackToMatchingEmptyLocale:(BOOL)a1 excludeM3U8Metadata:(BOOL)a2;
- (BOOL)_updateDisplayNameWithLocale:(id)a0 fallingBackToMatchingUndeterminedAndMultilingual:(BOOL)a1 context:(long long)a2;
- (id)_languageDisplayNameFromMetadataAccordingToPreferredLanguages:(id)a0 fallingBackToMatchingEmptyLocale:(BOOL)a1;
- (id)_displayNameWithLocale:(id)a0 fallingBackToMatchingUndeterminedAndMultilingual:(BOOL)a1;
- (id)metadataForFormat:(id)a0;
- (id)_groupID;
- (id)description;
- (id)languageCode;
- (BOOL)hasMediaCharacteristic:(id)a0;
- (id)mediaCharacteristics;
- (id)init;
- (id)initWithGroup:(id)a0;
- (BOOL)_representsNilSelection;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionary;
- (void)dealloc;
- (id)_ancillaryDescription;
- (BOOL)_isAuxiliaryContent;
- (BOOL)_isDesignatedDefault;
- (BOOL)displaysNonForcedSubtitles;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;

@end
