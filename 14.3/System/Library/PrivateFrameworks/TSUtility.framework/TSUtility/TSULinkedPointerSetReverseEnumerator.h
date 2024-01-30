@class TSULinkedPointerSetEntry;

@interface TSULinkedPointerSetReverseEnumerator : NSEnumerator {
    TSULinkedPointerSetEntry *mTail;
    TSULinkedPointerSetEntry *mLastUsed;
}

- (id)nextObject;
- (id)initWithLastEntry:(id)a0;

@end
