@class NSDictionary, AVWeakReference;

@interface AVMediaSelectionNilOption : AVMediaSelectionOption {
    id _groupID;
    id _groupMediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (id)group;
- (BOOL)isPlayable;
- (id)_groupMediaType;
- (id)_groupID;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithGroup:(id)a0;
- (BOOL)_representsNilSelection;
- (id)dictionary;
- (void)dealloc;

@end
