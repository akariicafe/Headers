@class _NSUndoObject;

@interface _NSUndoStack : NSObject {
    unsigned long long _max;
    unsigned long long _count;
    unsigned long long _nestingLevel;
    _NSUndoObject *_head;
}

- (void)markEnd;
- (void)push:(id)a0;
- (id)groupIdentifier;
- (id)init;
- (void)dealloc;
- (void)removeObject:(id)a0;
- (unsigned long long)max;
- (unsigned long long)nestingLevel;
- (void)setGroupIdentifier:(id)a0;
- (void)setDiscardable:(BOOL)a0;
- (id)description;
- (id)_beginMark;
- (void)_removeBottom;
- (id)popUndoObject;
- (id)topUndoObject;
- (void)setMax:(unsigned long long)a0;
- (unsigned long long)count;
- (BOOL)popAndInvoke;
- (void)removeAllObjects;
- (BOOL)isDiscardable;
- (void)markBegin;
- (void)removeAllObjectsWithTarget:(id)a0;

@end
