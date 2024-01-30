@class NSString, NSArray, TIKeyboardSecureCandidateRGBColor, TIKeyboardSecureCandidateLayoutTraits, TIKeyboardSecureCandidateTextTraits, NSDictionary;

@interface TIKeyboardSecureCandidateRenderTraits : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) TIKeyboardSecureCandidateRGBColor *textColor;
@property (retain, nonatomic) TIKeyboardSecureCandidateLayoutTraits *layoutTraits;
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *headerTextTraits;
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *inputTextTraits;
@property (copy, nonatomic) NSString *prefixText;
@property (copy, nonatomic) NSString *suffixText;
@property (nonatomic) double singleCellWidth;
@property (copy, nonatomic) NSArray *resultCountToSingleCellWidth;
@property (copy, nonatomic) NSDictionary *cellWidthOptions;
@property (nonatomic) double singleCellHeight;
@property (nonatomic) double singleCellVerticalPadding;
@property (nonatomic) double dividerLineWidth;
@property (nonatomic) long long maxCellCount;
@property (nonatomic) long long sharedCellCount;
@property (nonatomic) double screenScale;
@property (nonatomic) long long cellRenderingStyle;
@property (nonatomic) BOOL isCandidateUI;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
