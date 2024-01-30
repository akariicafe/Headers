@class NSNumber, UIFont;

@interface PKPassFieldTemplate : NSObject

@property (retain, nonatomic) NSNumber *boxedTextAlignment;
@property (retain, nonatomic) NSNumber *boxedVerticalPadding;
@property (retain, nonatomic) NSNumber *boxedSuppressesLabel;
@property (retain, nonatomic) NSNumber *boxedLabelCaseStyle;
@property (retain, nonatomic) NSNumber *boxedValueSignificant;
@property (retain, nonatomic) NSNumber *boxedValueCanWrap;
@property (retain, nonatomic) NSNumber *boxedSuppressesEmptyLabel;
@property (nonatomic) long long textAlignment;
@property (nonatomic) double verticalPadding;
@property (retain, nonatomic) UIFont *labelFont;
@property (retain, nonatomic) UIFont *valueFont;
@property (nonatomic) BOOL suppressesLabel;
@property (nonatomic) BOOL suppressesEmptyLabel;
@property (nonatomic) long long labelCaseStyle;
@property (nonatomic) BOOL valueSignificant;
@property (nonatomic) BOOL valueCanWrap;
@property (retain, nonatomic) Class viewSubclass;

+ (id)fieldTemplateWithTextAlignment:(long long)a0;
+ (id)_templateByResolvingTemplate:(id)a0 withDefault:(id)a1;
+ (id)fieldTemplateWithVerticalPadding:(double)a0;
+ (id)fieldTemplateWithViewSubclass:(Class)a0;

- (void).cxx_destruct;

@end
