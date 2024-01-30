@class NSString, NSDictionary, AVWeakReference;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSString *_optionMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (id)group;
- (BOOL)isPlayable;
- (id)mediaType;
- (id)locale;
- (id)_groupMediaType;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (id)metadataForFormat:(id)a0;
- (id)_groupID;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (BOOL)isEqual:(id)a0;
- (id)dictionary;
- (unsigned long long)hash;
- (void)dealloc;

@end
