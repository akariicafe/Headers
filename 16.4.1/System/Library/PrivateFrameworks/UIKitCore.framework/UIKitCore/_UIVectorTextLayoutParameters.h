@class NSString, NSAttributedString, UITraitCollection;

@interface _UIVectorTextLayoutParameters : NSObject <_UIVectorTextLayoutParameters, NSCopying>

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) struct CGSize { double width; double height; } withinSize;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) long long lineBreakMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parametersSuitableForView:(id)a0;

- (id)initWithParameters:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)_copyFromParameters:(id)a0;
- (BOOL)isEqualToParameters:(id)a0;

@end
