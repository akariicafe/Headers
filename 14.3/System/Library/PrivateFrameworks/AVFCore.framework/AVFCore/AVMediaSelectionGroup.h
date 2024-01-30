@class NSArray, AVMediaSelectionOption, AVMediaSelectionGroupInternal;

@interface AVMediaSelectionGroup : NSObject <NSCopying> {
    AVMediaSelectionGroupInternal *_mediaSelectionGroup;
}

@property (readonly, nonatomic) NSArray *options;
@property (readonly, nonatomic) AVMediaSelectionOption *defaultOption;
@property (readonly, nonatomic) BOOL allowsEmptySelection;

+ (id)mediaSelectionOptionsFromArray:(id)a0 withLocale:(id)a1;
+ (id)mediaSelectionOptionsFromArray:(id)a0 filteredAndSortedAccordingToPreferredLanguages:(id)a1;
+ (id)mediaSelectionOptionsFromArray:(id)a0 withMediaCharacteristics:(id)a1;
+ (id)mediaSelectionOptionsFromArray:(id)a0 withoutMediaCharacteristics:(id)a1;
+ (id)playableMediaSelectionOptionsFromArray:(id)a0;
+ (id)mediaSelectionGroupWithAsset:(id)a0 dictionary:(id)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionary;
- (id)asset;
- (BOOL)_isStreamingGroup;
- (BOOL)_matchesGroupID:(id)a0 mediaType:(id)a1;
- (void)dealloc;
- (id)_groupID;
- (id)description;
- (id)_groupMediaCharacteristics;
- (id)_groupMediaType;
- (id)_optionWithID:(id)a0 displaysNonForcedSubtitles:(BOOL)a1;
- (id)_primaryMediaCharacteristic;
- (id)_weakReference;
- (id)mediaSelectionOptionWithPropertyList:(id)a0;

@end
