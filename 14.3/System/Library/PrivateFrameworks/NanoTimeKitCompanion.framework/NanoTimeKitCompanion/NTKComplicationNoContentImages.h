@class UIImage;

@interface NTKComplicationNoContentImages : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIImage *modularSmallImage;
@property (retain, nonatomic) UIImage *utilitarianSmallImage;
@property (retain, nonatomic) UIImage *circularSmallImage;
@property (retain, nonatomic) UIImage *extraLargeImage;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
