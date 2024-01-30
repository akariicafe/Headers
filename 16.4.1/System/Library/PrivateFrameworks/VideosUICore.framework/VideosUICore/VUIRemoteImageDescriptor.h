@class NSString, UIColor, NSShadow;

@interface VUIRemoteImageDescriptor : NSObject

@property (readonly, nonatomic) NSString *src;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) BOOL loadsImmediately;
@property (nonatomic, getter=isTemplated) BOOL templated;
@property (copy, nonatomic) NSString *extension;
@property (copy, nonatomic) NSString *p3Specifier;
@property (copy, nonatomic) NSString *cropCode;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) UIColor *placeholderColor;
@property (copy, nonatomic) NSString *placeholderSrc;
@property (nonatomic) unsigned long long decoratorType;
@property (nonatomic) long long scaleMode;
@property (nonatomic) BOOL continuousBorder;
@property (nonatomic) struct _VUICornerRadii { double topLeft; double topRight; double bottomLeft; double bottomRight; } borderRadii;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) NSShadow *shadow;
@property (nonatomic) BOOL animatesShadowChanges;
@property (copy, nonatomic) NSString *accessibilityText;
@property (nonatomic) BOOL optimizedImageRendering;
@property (nonatomic) BOOL clearsExisting;

- (void).cxx_destruct;
- (id)initWithSrc:(id)a0 size:(struct CGSize { double x0; double x1; })a1 containerSize:(struct CGSize { double x0; double x1; })a2;
- (id)initWithSrc:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
