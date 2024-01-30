@class AVAssetTrack, NSDictionary, AVWeakReference;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {
    id _groupID;
    AVAssetTrack *_track;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (id)commonMetadata;
- (BOOL)isPlayable;
- (id)group;
- (id)metadataForFormat:(id)a0;
- (id)dictionary;
- (id)availableMetadataFormats;
- (id)mediaType;
- (id)_groupID;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (int)trackID;
- (id)locale;
- (id)_track;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;
- (BOOL)displaysNonForcedSubtitles;
- (id)mediaSubTypes;
- (id)track;

@end
