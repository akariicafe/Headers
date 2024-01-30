@class NSDictionary, AVWeakReference;

@interface AVMediaSelectionNilOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (BOOL)isPlayable;
- (id)group;
- (id)dictionary;
- (id)_groupMediaType;
- (id)_groupID;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithGroup:(id)a0;
- (BOOL)_representsNilSelection;

@end
