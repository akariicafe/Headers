@interface ADHistoryDistributionEnumerator : NSObject {
    void *_iterator;
}

- (id)initWithIterator:(void *)a0;
- (BOOL)getNextValue:(double *)a0 secondsInDayOffset:(int *)a1;

@end
