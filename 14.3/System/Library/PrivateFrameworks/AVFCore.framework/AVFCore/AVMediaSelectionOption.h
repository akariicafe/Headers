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

+ (id)mediaSelectionNilOptionForGroup:(id)a0;
+ (id)mediaSelectionOptionForAsset:(id)a0 group:(id)a1 dictionary:(id)a2 hasUnderlyingTrack:(BOOL)a3;
+ (BOOL)_plistHasOptionIdentifier:(id)a0;

- (id)_preferredMetadataTitleAccordingToPreferredLanguages:(id)a0 fallingBackToMatchingEmptyLocale:(BOOL)a1 excludeM3U8Metadata:(BOOL)a2;
- (id)propertyList;
- (id)track;
- (id)init;
- (id)initWithGroup:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionary;
- (BOOL)_representsNilSelection;
- (id)_track;
- (void)dealloc;
- (id)optionID;
- (id)mediaCharacteristics;
- (id)fallbackIDs;
- (BOOL)_isAuxiliaryContent;
- (BOOL)_isDesignatedDefault;
- (id)_ancillaryDescription;
- (BOOL)displaysNonForcedSubtitles;
- (id)_groupID;
- (id)languageCode;
- (id)description;
- (id)group;
- (id)_title;
- (id)_groupMediaCharacteristics;
- (id)_groupMediaType;
- (id)outOfBandSource;
- (id)outOfBandIdentifier;
- (id)_taggedMediaCharacteristics;
- (id)associatedExtendedLanguageTag;
- (id)associatedPersistentIDs;
- (BOOL)_isMainProgramContent;
- (id)displayNameWithLocale:(id)a0;
- (id)_languageDisplayNameFromMetadataAccordingToPreferredLanguages:(id)a0 fallingBackToMatchingEmptyLocale:(BOOL)a1;
- (id)_displayNameWithLocale:(id)a0 fallingBackToMatchingUndeterminedAndMultilingual:(BOOL)a1;
- (id)associatedUnicodeLanguageIdentifier;
- (BOOL)hasMediaCharacteristic:(id)a0;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;
- (id)metadataForFormat:(id)a0;

@end
