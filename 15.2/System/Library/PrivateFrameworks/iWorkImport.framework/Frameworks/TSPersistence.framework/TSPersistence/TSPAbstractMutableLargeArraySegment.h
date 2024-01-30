@class NSArray, NSMutableArray, NSString;
@protocol TSPMutableLargeArraySegmentDelegate;

@interface TSPAbstractMutableLargeArraySegment : TSPObject <NSFastEnumeration> {
    unsigned int _delayedArchivingPriority;
    NSMutableArray *_backingStore;
    unsigned long long _mutations;
    unsigned long long _estimatedByteSize;
}

@property (weak, nonatomic) id<TSPMutableLargeArraySegmentDelegate> delegate;
@property (readonly) unsigned long long count;
@property (readonly, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic) NSMutableArray *mutableArrayWrapper;
@property (nonatomic) BOOL storeOutsideObjectArchive;
@property (nonatomic) BOOL shouldDelayArchiving;
@property (nonatomic) unsigned int delayedArchivingPriority;
@property (nonatomic) unsigned long long estimatedByteSize;
@property (copy, nonatomic) NSString *packageLocator;

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)commonInit;
- (id)initWithContext:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)removeLastObject;
- (void)addObjectsFromArray:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)addObject:(id)a0 willModify:(BOOL)a1;
- (id)initWithArray:(id)a0 context:(id)a1;
- (unsigned long long)estimatedByteSizeOfElement:(id)a0;
- (id)initWithArray:(id)a0 delegate:(id)a1 shouldDelayArchiving:(BOOL)a2 context:(id)a3;
- (void)loadFromLargeArraySegmentMessage:(const void *)a0 unarchiver:(id)a1;
- (void)saveToLargeArraySegmentMessage:(void *)a0 archiver:(id)a1;
- (void)loadStoreOutsideObjectArchiveFromUnarchiver:(id)a0;
- (id)initWithDelegate:(id)a0 shouldDelayArchiving:(BOOL)a1 context:(id)a2;
- (id)bisectAtIndex:(unsigned long long)a0;

@end
