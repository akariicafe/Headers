@class NSArray, AVMediaSelectionOption, AVMediaSelectionGroupInternal;

@interface AVMediaSelectionGroup : NSObject <NSCopying> {
    AVMediaSelectionGroupInternal *_mediaSelectionGroup;
}

@property (readonly, nonatomic) NSArray *options;
@property (readonly, nonatomic) AVMediaSelectionOption *defaultOption;
@property (readonly, nonatomic) BOOL allowsEmptySelection;

+ (id)playableMediaSelectionOptionsFromArray:(id)a0;
+ (id)mediaSelectionOptionsFromArray:(id)a0 filteredAndSortedAccordingToPreferredLanguages:(id)a1;
+ (id)mediaSelectionOptionsFromArray:(id)a0 withLocale:(id)a1;
+ (id)mediaSelectionOptionsFromArray:(id)a0 withMediaCharacteristics:(id)a1;
+ (id)mediaSelectionOptionsFromArray:(id)a0 withoutMediaCharacteristics:(id)a1;
+ (id)mediaSelectionGroupWithAsset:(id)a0 dictionary:(id)a1;

- (id)currentBundleIdentifier;
- (id)_groupMediaCharacteristics;
- (id)_groupMediaType;
- (id)_primaryMediaCharacteristic;
- (id)_optionWithID:(id)a0 displaysNonForcedSubtitles:(BOOL)a1;
- (void)setCurrentBundleIdentifier:(id)a0;
- (id)mediaSelectionOptionWithPropertyList:(id)a0;
- (id)_groupID;
- (id)description;
- (id)asset;
- (id)_weakReference;
- (id)init;
- (BOOL)_isStreamingGroup;
- (BOOL)_matchesGroupID:(id)a0 mediaType:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionary;
- (void)dealloc;

@end
