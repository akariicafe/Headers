@class NSString, TIKeyboardSecureCandidateRGBColor;

@interface TIKeyboardSecureCandidateTextTraits : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) double maxFontSize;
@property (nonatomic) double minFontSize;
@property (retain, nonatomic) TIKeyboardSecureCandidateRGBColor *textColor;
@property (nonatomic) double yCoordinate;
@property (nonatomic) double baselineOffset;

+ (id)traitsWithFontName:(id)a0 maxFontSize:(double)a1 minFontSize:(double)a2 textColor:(id)a3 yCoordinate:(double)a4 baselineOffset:(double)a5;

- (id)initWithFontName:(id)a0 maxFontSize:(double)a1 minFontSize:(double)a2 textColor:(id)a3;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFontName:(id)a0 maxFontSize:(double)a1 minFontSize:(double)a2 textColor:(id)a3 yCoordinate:(double)a4 baselineOffset:(double)a5;
- (id)initWithFontName:(id)a0 fontSize:(double)a1 textColor:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
