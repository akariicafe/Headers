@class NSMutableArray;

@interface AVPrioritizedSize : NSObject

@property (retain, nonatomic) NSMutableArray *requiredPrioritySizes;
@property (retain, nonatomic) NSMutableArray *veryHighPrioritySizes;
@property (retain, nonatomic) NSMutableArray *highPrioritySizes;
@property (retain, nonatomic) NSMutableArray *mediumPrioritySizes;
@property (retain, nonatomic) NSMutableArray *lowPrioritySizes;
@property (nonatomic) struct CGSize { double width; double height; } currentTotalSize;

+ (id)sizesResolvingFirstPrioritizedSize:(id)a0 secondPrioritizedSize:(id)a1 inAvailableWidth:(double)a2;

- (id)init;
- (void).cxx_destruct;
- (void)addSize:(struct CGSize { double x0; double x1; })a0 withPriority:(unsigned long long)a1;
- (id)removeLastSizeOfPriority:(unsigned long long)a0;

@end
