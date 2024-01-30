@class NSString, NSDictionary, AVWeakReference;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSString *_optionMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (id)locale;
- (id)availableMetadataFormats;
- (id)mediaType;
- (id)dictionary;
- (void)dealloc;
- (unsigned long long)hash;
- (id)_groupID;
- (id)group;
- (id)_groupMediaType;
- (BOOL)isEqual:(id)a0;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (id)metadataForFormat:(id)a0;
- (id)commonMetadata;
- (BOOL)isPlayable;

@end
