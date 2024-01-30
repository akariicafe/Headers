@class AVAssetTrack, NSDictionary, AVWeakReference;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {
    id _groupID;
    AVAssetTrack *_track;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (id)locale;
- (int)trackID;
- (id)availableMetadataFormats;
- (id)mediaType;
- (id)track;
- (id)dictionary;
- (id)_track;
- (void)dealloc;
- (BOOL)displaysNonForcedSubtitles;
- (id)mediaSubTypes;
- (unsigned long long)hash;
- (id)_groupID;
- (id)group;
- (BOOL)isEqual:(id)a0;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;
- (id)metadataForFormat:(id)a0;
- (id)commonMetadata;
- (BOOL)isPlayable;

@end
