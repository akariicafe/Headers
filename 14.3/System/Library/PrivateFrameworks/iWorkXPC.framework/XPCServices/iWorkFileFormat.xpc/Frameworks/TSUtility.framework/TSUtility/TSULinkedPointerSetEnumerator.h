@class TSULinkedPointerSetEntry;

@interface TSULinkedPointerSetEnumerator : NSEnumerator {
    TSULinkedPointerSetEntry *mHead;
    TSULinkedPointerSetEntry *mLastUsed;
}

- (id)nextObject;
- (id)initWithFirstEntry:(id)a0;

@end
