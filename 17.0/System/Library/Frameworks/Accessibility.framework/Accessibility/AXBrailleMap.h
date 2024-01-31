@class CIImage, NSMutableDictionary;

@interface AXBrailleMap : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_values;
    CIImage *_presentedImage;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGSize { double width; double height; } dimensions;

+ (id)connectedBrailleMap;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setHeight:(float)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (float)heightAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)presentImage:(struct CGImage { } *)a0;
- (id)presentedImage;

@end
