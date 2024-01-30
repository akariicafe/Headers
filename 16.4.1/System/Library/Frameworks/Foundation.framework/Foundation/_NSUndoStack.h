@class _NSUndoObject;

@interface _NSUndoStack : NSObject {
    unsigned long long _max;
    unsigned long long _count;
    unsigned long long _nestingLevel;
    _NSUndoObject *_head;
}

- (void)setGroupIdentifier:(id)a0;
- (void)markEnd;
- (void)removeObject:(id)a0;
- (id)_beginMark;
- (BOOL)isDiscardable;
- (void)removeAllObjectsWithTarget:(id)a0;
- (unsigned long long)nestingLevel;
- (id)popUndoObject;
- (id)groupIdentifier;
- (unsigned long long)max;
- (unsigned long long)count;
- (void)removeAllObjects;
- (void)dealloc;
- (BOOL)popAndInvoke;
- (void)setDiscardable:(BOOL)a0;
- (void)push:(id)a0;
- (id)init;
- (void)setMax:(unsigned long long)a0;
- (id)topUndoObject;
- (id)description;
- (void)_removeBottom;
- (void)markBegin;

@end
