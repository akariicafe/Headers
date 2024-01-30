@class NSMutableArray, NSObject;
@protocol SpeedRangeDelegate;

@interface SpeedRanges : NSObject <NSFastEnumeration, NSCopying>

@property (retain, nonatomic) SpeedRanges *ramped;
@property (retain, nonatomic) NSMutableArray *array;
@property (retain, nonatomic) SpeedRanges *old;
@property int editCount;
@property (nonatomic) int mediaDuration;
@property (readonly, nonatomic) BOOL isEdited;
@property (weak, nonatomic) NSObject<SpeedRangeDelegate> *delegate;

+ (id)objectFromPlist:(id)a0;
+ (void)rangesFromSloMoAsset:(id)a0 userAdjustedOnly:(BOOL)a1 completion:(id /* block */)a2;

- (id)firstObject;
- (id)lastObject;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (BOOL)containsObject:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)removeLastObject;
- (id)description;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)plistRepresentation;
- (void)forwardInvocation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (id)initWithDuration:(int)a0;
- (void)removeObject:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (int)mediaTimeForClipTime:(int)a0;
- (int)clipTimeForMediaTime:(int)a0;
- (void)willChange;
- (void)didChange;
- (float)mediaTimeFloatForClipTime:(int)a0;
- (void)removeShortRanges;
- (void)updateLinks;
- (id)speedRangeAtClipTime:(int)a0;
- (void)_removeBackToBackFreezes;
- (id)generateRamps;
- (void)testRamps;
- (void)testUberRamp;
- (id)setFromAdjustmentData:(id)a0;
- (int)mapClipTime:(int)a0 fromMap:(id)a1;

@end
