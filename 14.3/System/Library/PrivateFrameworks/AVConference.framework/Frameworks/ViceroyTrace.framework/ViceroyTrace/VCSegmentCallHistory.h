@interface VCSegmentCallHistory : NSObject

@property (readonly) int shortTermAdjustmentTBR;
@property (readonly) int longTermAdjustmentTBR;
@property (readonly) int previousISBR;
@property (readonly) int longTermISBR;
@property (readonly) int shortTermISBR;
@property (readonly) int longTermSATXBR;
@property (readonly) int shortTermSATXBR;
@property (readonly) int longTermSARBR;
@property (readonly) int shortTermSARBR;
@property (readonly) int longTermBWE;
@property (readonly) int shortTermBWE;
@property (readonly) int historyLength;

+ (int)fieldSize;

- (id)init;
- (int)serialize:(int *)a0;
- (int)deserialize:(int *)a0;
- (void)updateSegmentWithTBR:(int)a0 ISBTR:(int)a1 SATXBR:(int)a2 SARBR:(int)a3 BWE:(int)a4 shortTermWeight:(double)a5 longTermWeight:(double)a6;

@end
