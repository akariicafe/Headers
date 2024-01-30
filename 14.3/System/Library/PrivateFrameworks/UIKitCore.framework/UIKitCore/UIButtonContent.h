@class UIColor, NSString, NSNumber, UIImage, _UIGraphicsLetterpressStyle, NSAttributedString, UIImageSymbolConfiguration;

@interface UIButtonContent : NSObject <NSCoding, NSCopying> {
    BOOL isWidthVariant;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSAttributedString *attributedTitle;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (retain, nonatomic) UIImage *background;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *imageColor;
@property (retain, nonatomic) UIColor *shadowColor;
@property (retain, nonatomic) NSNumber *drawingStroke;
@property (retain, nonatomic) _UIGraphicsLetterpressStyle *letterpressStyle;
@property (readonly, nonatomic) BOOL isEmpty;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)updateVariableLengthStringForView:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
