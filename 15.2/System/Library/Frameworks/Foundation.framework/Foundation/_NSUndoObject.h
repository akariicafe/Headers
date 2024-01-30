@interface _NSUndoObject : NSObject {
    _NSUndoObject *next;
    _NSUndoObject *previous;
    id _target;
}

- (id)target;
- (void)invoke;
- (BOOL)isEndMark;
- (id)initWithTarget:(id)a0;
- (id)init;
- (BOOL)isBeginMark;

@end
