@class NSString, UIColor;

@interface ASCLockupTheme : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) ASCLockupTheme *adTheme;
@property (class, readonly) ASCLockupTheme *adWhiteTheme;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *titleTextStyle;
@property (copy, nonatomic) id /* block */ titleFontSizeProvider;
@property (nonatomic) double titleFontWeight;
@property (copy, nonatomic) NSString *subtitleTextStyle;
@property (copy, nonatomic) id /* block */ subtitleFontSizeProvider;
@property (nonatomic) double subtitleFontWeight;
@property (copy, nonatomic) NSString *headingTextStyle;
@property (copy, nonatomic) id /* block */ headingFontSizeProvider;
@property (nonatomic) double headingFontWeight;
@property (readonly, nonatomic) UIColor *titleTextColor;
@property (readonly, nonatomic) UIColor *subtitleTextColor;
@property (readonly, nonatomic) UIColor *headingTextColor;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithTitleTextColor:(id)a0 titleFontSizeProvider:(id /* block */)a1 titleFontWeight:(double)a2 subtitleTextColor:(id)a3 subtitleFontSizeProvider:(id /* block */)a4 subtitleFontWeight:(double)a5 headingTextColor:(id)a6 headingFontSizeProvider:(id /* block */)a7 headingFontWeight:(double)a8;
- (id)initWithTitleTextColor:(id)a0 titleTextStyle:(id)a1 titleFontWeight:(double)a2 subtitleTextColor:(id)a3 subtitleTextStyle:(id)a4 subtitleFontWeight:(double)a5 headingTextColor:(id)a6 headingTextStyle:(id)a7 headingFontWeight:(double)a8;
- (id)titleFontCompatibleWithTraitCollection:(id)a0;
- (id)subtitleFontCompatibleWithTraitCollection:(id)a0;
- (id)headingFontCompatibleWithTraitCollection:(id)a0;

@end
