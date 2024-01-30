@interface _NSUndoBeginMark : _NSUndoObject {
    id _groupIdentifier;
    BOOL _isDiscardable;
}

- (void)setGroupIdentifier:(id)a0;
- (BOOL)isDiscardable;
- (id)groupIdentifier;
- (void)setDiscardable:(BOOL)a0;
- (id)description;
- (BOOL)isBeginMark;
- (void)dealloc;

@end
