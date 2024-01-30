@class _NSUndoObject;

@interface _NSUndoStack : NSObject {
    unsigned long long _max;
    unsigned long long _count;
    unsigned long long _nestingLevel;
    _NSUndoObject *_head;
}

- (void)setGroupIdentifier:(id)a0;
- (id)topUndoObject;
- (BOOL)isDiscardable;
- (void)markBegin;
- (void)removeAllObjects;
- (id)groupIdentifier;
- (void)_removeBottom;
- (void)setDiscardable:(BOOL)a0;
- (BOOL)popAndInvoke;
- (unsigned long long)nestingLevel;
- (void)removeAllObjectsWithTarget:(id)a0;
- (id)description;
- (id)_beginMark;
- (id)init;
- (void)markEnd;
- (unsigned long long)count;
- (void)push:(id)a0;
- (void)setMax:(unsigned long long)a0;
- (unsigned long long)max;
- (id)popUndoObject;
- (void)dealloc;
- (void)removeObject:(id)a0;

@end
