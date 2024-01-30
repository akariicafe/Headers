@interface PXMutableDateRangeSet : PXDateRangeSet

- (void)addDateRange:(id)a0;
- (BOOL)_attemptToAddDateRange:(id)a0 outNextRange:(id *)a1;
- (void)removeAllDateRanges;

@end
