@class NSMutableDictionary, CLKTextProvider, NSDictionary, REImageContentProvider, REAccessoryMatchup, NSTimeZone, UIColor, NSString, RETextContentProvider, NSAttributedString, REAccessoryImage, NSNumber, CLKImageProvider, REAccessoryDescription, UIImage;

@interface REContent : NSObject <_REContentLoggingProperties, NSCopying, NSSecureCoding> {
    NSMutableDictionary *_contents;
    NSTimeZone *_timeZone;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIImage *overrideHeaderImage;
@property (retain, nonatomic) UIImage *overrideBodyImage;
@property (retain, nonatomic) NSString *bodyImageCompositingFilter;
@property (copy, nonatomic) RETextContentProvider *headerTextContentProvider;
@property (copy, nonatomic) REImageContentProvider *headerImageContentProvider;
@property (copy, nonatomic) REImageContentProvider *bodyImageContentProvider;
@property (copy, nonatomic) RETextContentProvider *description1TextContentProvider;
@property (copy, nonatomic) RETextContentProvider *description2TextContentProvider;
@property (copy, nonatomic) RETextContentProvider *description3TextContentProvider;
@property (copy, nonatomic) CLKTextProvider *headerTextProvider;
@property (copy, nonatomic) CLKImageProvider *headerImageProvider;
@property (copy, nonatomic) CLKImageProvider *bodyImageProvider;
@property (copy, nonatomic) CLKTextProvider *description1TextProvider;
@property (copy, nonatomic) CLKTextProvider *description2TextProvider;
@property (copy, nonatomic) CLKTextProvider *description3TextProvider;
@property (copy, nonatomic) NSAttributedString *headerText;
@property (copy, nonatomic) UIImage *headerImage;
@property (copy, nonatomic) UIImage *bodyImage;
@property (copy, nonatomic) NSAttributedString *description1Text;
@property (copy, nonatomic) NSAttributedString *description2Text;
@property (copy, nonatomic) NSAttributedString *description3Text;
@property (nonatomic) unsigned long long punchThrough;
@property (copy, nonatomic) UIColor *tintColor;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL useMonospaceFont;
@property (nonatomic) unsigned long long headerFontStyle;
@property (nonatomic) unsigned long long description1FontStyle;
@property (nonatomic) unsigned long long description2FontStyle;
@property (nonatomic) BOOL tintColorAffectsHeader;
@property (nonatomic) BOOL bodyImageShouldStretch;
@property (nonatomic) unsigned int headerImageEdge;
@property (copy, nonatomic) REAccessoryDescription *descriptionAccessory;
@property (copy, nonatomic) REAccessoryImage *imageAccessory;
@property (copy, nonatomic) REAccessoryMatchup *matchupAccessory;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageFocusRect;
@property (copy, nonatomic) NSString *overrideBodyString;
@property (copy, nonatomic) NSNumber *description1Opacity;
@property (readonly, nonatomic) NSDictionary *loggingContentValues;

- (void)encodeWithCoder:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
