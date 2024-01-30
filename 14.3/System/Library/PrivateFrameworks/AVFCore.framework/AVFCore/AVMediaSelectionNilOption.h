@class NSDictionary, AVWeakReference;

@interface AVMediaSelectionNilOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (id)initWithGroup:(id)a0;
- (id)dictionary;
- (BOOL)_representsNilSelection;
- (void)dealloc;
- (id)_groupID;
- (id)description;
- (id)group;
- (id)_groupMediaType;
- (BOOL)isEqual:(id)a0;
- (BOOL)isPlayable;

@end
