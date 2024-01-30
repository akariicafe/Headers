@interface _IMTranscriptBubbleSizeCacheEntry : NSObject <NSCopying>

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double minimumWidth;
@property (nonatomic) double maximumWidth;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 maximumWidth:(double)a1;

@end
