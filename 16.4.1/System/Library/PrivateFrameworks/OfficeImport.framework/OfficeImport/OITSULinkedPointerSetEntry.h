@interface OITSULinkedPointerSetEntry : NSObject {
    id mObject;
    OITSULinkedPointerSetEntry *mPrevious;
    OITSULinkedPointerSetEntry *mNext;
}

- (void)dealloc;
- (id)initWithObject:(id)a0 previousEntry:(id)a1;

@end
