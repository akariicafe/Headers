@interface CUIPSDGradientStop : NSObject <NSCoding, NSCopying> {
    double location;
}

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isColorStop;
- (BOOL)isOpacityStop;
- (double)location;
- (id)initWithCoder:(id)a0;
- (BOOL)isDoubleStop;
- (void)setLocation:(double)a0;
- (id)initWithLocation:(double)a0;
- (void)encodeWithCoder:(id)a0;

@end
