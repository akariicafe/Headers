@interface TSTCellDiffArray : TSPAbstractMutableLargeArray

+ (Class)arraySegmentClass;

- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)packageLocatorForSegments;

@end
