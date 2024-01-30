@interface _NSUndoObject : NSObject {
    _NSUndoObject *next;
    _NSUndoObject *previous;
    id _target;
}

- (BOOL)isEndMark;
- (void)invoke;
- (id)initWithTarget:(id)a0;
- (id)target;
- (BOOL)isBeginMark;
- (id)init;

@end
