@interface TSULinkedPointerSetEntry : NSObject {
    id mObject;
    TSULinkedPointerSetEntry *mPrevious;
    TSULinkedPointerSetEntry *mNext;
}

- (void)dealloc;
- (id)initWithObject:(id)a0 previousEntry:(id)a1;

@end
