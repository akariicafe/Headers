@class NSString, NSDictionary, AVWeakReference;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSString *_optionMediaType;
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
- (id)_groupMediaType;
- (id)mediaType;
- (id)_groupID;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (id)locale;

@end
