@class AVAsset, NSDictionary, NSArray, AVMediaSelectionOption;

@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup {
    AVAsset *_asset;
    NSDictionary *_dictionary;
    NSArray *_groupMediaCharacteristics;
    NSArray *_options;
    AVMediaSelectionOption *_defaultOption;
    BOOL _isStreamingGroup;
}

- (id)init;
- (id)dictionary;
- (id)asset;
- (BOOL)_isStreamingGroup;
- (void)dealloc;
- (id)defaultOption;
- (unsigned long long)hash;
- (id)initWithAsset:(id)a0 dictionary:(id)a1;
- (id)_groupMediaCharacteristics;
- (id)_optionWithID:(id)a0 displaysNonForcedSubtitles:(BOOL)a1;
- (BOOL)isEqual:(id)a0;
- (id)_optionWithID:(id)a0 identifier:(id)a1 source:(id)a2 displaysNonForcedSubtitles:(BOOL)a3;
- (id)mediaSelectionOptionWithPropertyList:(id)a0;
- (id)options;

@end
