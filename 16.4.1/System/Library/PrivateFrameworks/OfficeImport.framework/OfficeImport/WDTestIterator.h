@class WDIterator;

@interface WDTestIterator : WDIterator {
    WDIterator *mIterator;
    id mNext;
}

- (id)next;
- (id)initWithIterator:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasNext;
- (BOOL)test:(id)a0;

@end
