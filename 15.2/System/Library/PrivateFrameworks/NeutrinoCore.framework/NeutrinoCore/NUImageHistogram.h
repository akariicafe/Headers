@class NUHistogram;

@interface NUImageHistogram : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) long long binCount;
@property (readonly, nonatomic) struct { double min; double max; } range;
@property (readonly, nonatomic) long long sampleCount;
@property (readonly, nonatomic) NUHistogram *red;
@property (readonly, nonatomic) NUHistogram *green;
@property (readonly, nonatomic) NUHistogram *blue;
@property (readonly, nonatomic) NUHistogram *luminance;

+ (Class)_histogramClass;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBinCount:(long long)a0 range:(struct { double x0; double x1; })a1;
- (id)immutableCopyWithZone:(struct _NSZone { } *)a0;

@end
