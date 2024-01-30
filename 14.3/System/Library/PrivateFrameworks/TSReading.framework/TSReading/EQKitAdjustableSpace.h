@interface EQKitAdjustableSpace : NSObject

@property (readonly, nonatomic) double ascent;
@property (readonly, nonatomic) double descent;
@property (readonly, nonatomic) double width;

+ (void)appendSpaceToAttributedString:(id)a0 ascent:(double)a1 descent:(double)a2 width:(double)a3;
+ (struct __CTRunDelegate { } *)newRunDelegateWithAscent:(double)a0 descent:(double)a1 width:(double)a2;

- (id)initWithAscent:(double)a0 descent:(double)a1 width:(double)a2;

@end
