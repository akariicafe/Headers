@class AVAsset, NSDictionary, NSArray, AVMediaSelectionOption;

@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup {
    AVAsset *_asset;
    NSDictionary *_dictionary;
    NSArray *_groupMediaCharacteristics;
    NSArray *_options;
    AVMediaSelectionOption *_defaultOption;
    BOOL _isStreamingGroup;
}

- (id)options;
- (id)dictionary;
- (id)mediaSelectionOptionWithPropertyList:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)_optionWithID:(id)a0 identifier:(id)a1 source:(id)a2 displaysNonForcedSubtitles:(BOOL)a3;
- (id)_groupMediaCharacteristics;
- (unsigned long long)hash;
- (id)_optionWithID:(id)a0 displaysNonForcedSubtitles:(BOOL)a1;
- (BOOL)_isStreamingGroup;
- (id)init;
- (id)initWithAsset:(id)a0 dictionary:(id)a1;
- (id)asset;
- (id)defaultOption;

@end
