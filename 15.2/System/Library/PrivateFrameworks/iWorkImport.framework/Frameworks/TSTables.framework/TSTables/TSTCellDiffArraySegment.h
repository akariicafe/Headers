@interface TSTCellDiffArraySegment : TSPAbstractMutableLargeArraySegment

- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (unsigned long long)componentReadVersion;
- (unsigned long long)estimatedByteSizeOfElement:(id)a0;

@end
