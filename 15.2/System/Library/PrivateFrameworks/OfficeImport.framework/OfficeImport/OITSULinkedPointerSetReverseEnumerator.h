@class OITSULinkedPointerSetEntry;

@interface OITSULinkedPointerSetReverseEnumerator : NSEnumerator {
    OITSULinkedPointerSetEntry *mTail;
    OITSULinkedPointerSetEntry *mLastUsed;
}

- (id)nextObject;
- (id)initWithLastEntry:(id)a0;

@end
