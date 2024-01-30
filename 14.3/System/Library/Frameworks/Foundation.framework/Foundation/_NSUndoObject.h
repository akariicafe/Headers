@interface _NSUndoObject : NSObject {
    _NSUndoObject *next;
    _NSUndoObject *previous;
    id _target;
}

- (id)initWithTarget:(id)a0;
- (id)init;
- (BOOL)isEndMark;
- (id)target;
- (void)invoke;
- (BOOL)isBeginMark;

@end
