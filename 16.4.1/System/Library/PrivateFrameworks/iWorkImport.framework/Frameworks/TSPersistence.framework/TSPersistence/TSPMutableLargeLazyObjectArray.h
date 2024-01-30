@interface TSPMutableLargeLazyObjectArray : TSPAbstractMutableLargeArray

+ (Class)arraySegmentClass;

- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (void)loadFromMessage:(const void *)a0 unarchiver:(id)a1;
- (id)convertSegmentElementToElement:(id)a0;
- (id)convertElementToSegmentElement:(id)a0;

@end
