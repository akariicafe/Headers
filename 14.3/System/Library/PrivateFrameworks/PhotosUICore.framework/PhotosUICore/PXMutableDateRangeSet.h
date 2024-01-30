@interface PXMutableDateRangeSet : PXDateRangeSet

- (BOOL)_attemptToAddDateRange:(id)a0 outNextRange:(id *)a1;
- (void)removeAllDateRanges;
- (void)addDateRange:(id)a0;

@end
