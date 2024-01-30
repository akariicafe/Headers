@class OITSULinkedPointerSetEntry;

@interface OITSULinkedPointerSetEnumerator : NSEnumerator {
    OITSULinkedPointerSetEntry *mHead;
    OITSULinkedPointerSetEntry *mLastUsed;
}

- (id)nextObject;
- (id)initWithFirstEntry:(id)a0;

@end
