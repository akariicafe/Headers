@interface CUIPSDGradientStop : NSObject <NSCoding, NSCopying> {
    double location;
}

+ (void)initialize;

- (id)initWithLocation:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isColorStop;
- (BOOL)isOpacityStop;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDoubleStop;
- (void)setLocation:(double)a0;
- (double)location;

@end
