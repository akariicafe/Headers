@interface _NSUndoBeginMark : _NSUndoObject {
    id _groupIdentifier;
    BOOL _isDiscardable;
}

- (void)setGroupIdentifier:(id)a0;
- (BOOL)isDiscardable;
- (id)groupIdentifier;
- (void)dealloc;
- (void)setDiscardable:(BOOL)a0;
- (BOOL)isBeginMark;
- (id)description;

@end
