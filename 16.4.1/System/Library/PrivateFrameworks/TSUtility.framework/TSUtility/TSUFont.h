@class NSString, UIFont;

@interface TSUFont : NSObject

@property (readonly, nonatomic) UIFont *platformFont;
@property (readonly, nonatomic) struct __CTFont { } *CTFont;
@property (readonly, retain, nonatomic) NSString *familyName;
@property (readonly, retain, nonatomic) NSString *fontName;
@property (readonly, nonatomic) double pointSize;
@property (readonly, nonatomic) double ascender;
@property (readonly, nonatomic) double descender;
@property (readonly, nonatomic) double capHeight;
@property (readonly, nonatomic) double xHeight;
@property (readonly, nonatomic) double lineHeight;

+ (id)fontWithName:(id)a0 size:(double)a1;
+ (id)boldSystemFontOfSize:(double)a0;
+ (id)systemFontOfSize:(double)a0;
+ (id)systemFontOfSize:(double)a0 weight:(double)a1;
+ (id)italicSystemFontOfSize:(double)a0;
+ (id)fontWithPlatformFont:(id)a0;

- (void)dealloc;
- (id)fontWithSize:(double)a0;
- (id)initWithCTFont:(struct __CTFont { } *)a0;
- (id)convertFontToBold:(BOOL)a0 italic:(BOOL)a1;
- (id)fontWithScale:(double)a0;
- (id)initWithPlatformFont:(id)a0;

@end
