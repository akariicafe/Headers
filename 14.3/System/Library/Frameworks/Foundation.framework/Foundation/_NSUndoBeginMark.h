@interface _NSUndoBeginMark : _NSUndoObject {
    id _groupIdentifier;
    BOOL _isDiscardable;
}

- (id)groupIdentifier;
- (void)dealloc;
- (void)setGroupIdentifier:(id)a0;
- (void)setDiscardable:(BOOL)a0;
- (id)description;
- (BOOL)isDiscardable;
- (BOOL)isBeginMark;

@end
