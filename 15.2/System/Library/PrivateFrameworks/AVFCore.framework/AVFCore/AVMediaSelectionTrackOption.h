@class AVAssetTrack, NSDictionary, AVWeakReference;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {
    id _groupID;
    AVAssetTrack *_track;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (id)group;
- (int)trackID;
- (BOOL)isPlayable;
- (id)track;
- (id)_track;
- (id)mediaType;
- (id)locale;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (id)metadataForFormat:(id)a0;
- (id)_groupID;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (BOOL)isEqual:(id)a0;
- (id)mediaSubTypes;
- (id)dictionary;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)displaysNonForcedSubtitles;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;

@end
