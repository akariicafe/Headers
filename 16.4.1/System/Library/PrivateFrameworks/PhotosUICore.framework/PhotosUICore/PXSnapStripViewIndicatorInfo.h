@class UIColor;

@interface PXSnapStripViewIndicatorInfo : NSObject

@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) double offset;
@property (readonly, nonatomic) unsigned long long style;
@property (nonatomic) BOOL disabled;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithOffset:(double)a0 color:(id)a1 style:(unsigned long long)a2;
- (BOOL)isEqualToIndicatorInfo:(id)a0;

@end
