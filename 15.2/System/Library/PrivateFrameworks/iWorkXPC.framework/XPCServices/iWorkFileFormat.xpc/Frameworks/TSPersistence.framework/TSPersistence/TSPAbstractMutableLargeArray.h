@class NSString, NSArray, NSMutableArray;

@interface TSPAbstractMutableLargeArray : TSPObject <NSFastEnumeration, TSPMutableLargeArraySegmentDelegate> {
    unsigned long long _mutations;
    unsigned long long _maxSegmentElementCount;
    unsigned long long _maxSegmentSize;
    NSMutableArray *_segments;
    struct vector<_NSRange, std::allocator<_NSRange>> { struct _NSRange *__begin_; struct _NSRange *__end_; struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { struct _NSRange *__value_; } __end_cap_; } _segmentRanges;
    long long _bisectedSegmentIdentifier;
    unsigned long long _bisectedSegmentIndex;
    unsigned long long _mergingSegmentIndex;
    BOOL _shouldDelayArchiving;
    unsigned int _delayedArchivingPriority;
    BOOL _storeOutsideObjectArchive;
}

@property (readonly, nonatomic) NSString *packageLocatorForSegments;
@property (readonly, nonatomic) BOOL hasDelayedArchivingPriority;
@property (readonly, nonatomic) BOOL hasMaxSegmentElementCount;
@property (readonly, nonatomic) BOOL hasMaxSegmentSize;
@property (nonatomic) BOOL shouldDelayArchiving;
@property (nonatomic) unsigned int delayedArchivingPriority;
@property (nonatomic) BOOL storeOutsideObjectArchive;
@property (readonly, nonatomic) BOOL disableSegmentation;
@property (readonly) unsigned long long count;
@property (nonatomic) unsigned long long maxSegmentElementCount;
@property (nonatomic) unsigned long long maxSegmentSize;
@property (readonly, nonatomic) unsigned long long segmentCount;
@property (readonly, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic) NSMutableArray *mutableArrayWrapper;
@property (readonly, nonatomic) unsigned long long estimatedByteSize;

+ (Class)arraySegmentClass;

- (id)dequeue;
- (id)firstObject;
- (id)lastObject;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)pop;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)commonInit;
- (void)removeAllObjects;
- (id)initWithContext:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)removeLastObject;
- (void)addObjectsFromArray:(id)a0;
- (void)addRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)peek;
- (void)push:(id)a0;
- (id).cxx_construct;
- (unsigned long long)elementCount;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)enqueue:(id)a0;
- (id)segmentAtIndex:(unsigned long long)a0;
- (id)initDocumentObjectWithContext:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithArray:(id)a0 context:(id)a1;
- (void)largeArraySegmentDidBisectAtIndex:(unsigned long long)a0 segments:(id)a1;
- (void)bisectSegmentIfNeeded:(unsigned long long)a0;
- (id)initWithContext:(id)a0 shouldDelayArchiving:(BOOL)a1 delayedArchivingPriority:(unsigned int)a2 storeOutsideObjectArchive:(BOOL)a3;
- (unsigned long long)segmentIndexForElementIndex:(unsigned long long)a0 firstSegmentIndex:(unsigned long long)a1 lastSegmentIndex:(unsigned long long)a2 segmentIndexGuess:(unsigned long long)a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfSegmentIndex:(unsigned long long)a0;
- (unsigned long long)segmentIndexForElementIndex:(unsigned long long)a0 segmentIndexGuess:(unsigned long long)a1;
- (id)convertSegmentElementToElement:(id)a0;
- (id)convertElementToSegmentElement:(id)a0;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forSegmentIndex:(unsigned long long)a1;
- (void)updateSegmentRangesAfterIndex:(unsigned long long)a0;
- (void)removeRangeAtSegmentIndex:(unsigned long long)a0;
- (void)mergeSegmentIfNeededAtIndex:(unsigned long long)a0;
- (id)createArraySegment;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })lastRange;
- (void)removeLastRange;
- (void)insertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atSegmentIndex:(unsigned long long)a1;
- (void)setMaxSegmentElementCount:(unsigned long long)a0 willModify:(BOOL)a1;
- (void)setMaxSegmentSize:(unsigned long long)a0 willModify:(BOOL)a1;
- (void)loadFromLargeArrayMessage:(const void *)a0 unarchiver:(id)a1;
- (void)saveToLargeArrayMessage:(void *)a0 archiver:(id)a1;
- (id)initWithContext:(id)a0 shouldDelayArchiving:(BOOL)a1 storeOutsideObjectArchive:(BOOL)a2;
- (id)segmentRanges;

@end
