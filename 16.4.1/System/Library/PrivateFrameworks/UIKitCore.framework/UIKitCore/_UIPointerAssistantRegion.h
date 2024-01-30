@class _UIAssistantEntry, UIView;

@interface _UIPointerAssistantRegion : UIPointerRegion {
    BOOL _selected;
    UIView *_targetView;
    _UIAssistantEntry *_assistant;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
