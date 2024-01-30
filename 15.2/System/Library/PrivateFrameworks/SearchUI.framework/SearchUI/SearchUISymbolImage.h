@class NSString, UIFont;

@interface SearchUISymbolImage : SearchUIImage

@property (retain) NSString *symbolName;
@property (retain) UIFont *symbolFont;
@property long long symbolScale;
@property long long symbolWeight;
@property BOOL punchThroughBackground;
@property int backgroundColor;
@property int primaryColor;
@property int secondaryColor;

+ (id)uiImageWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2 weight:(long long)a3 isTemplate:(BOOL)a4;
+ (id)uiImageWithSymbolName:(id)a0;
+ (id)uiImageWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2 weight:(long long)a3 isTemplate:(BOOL)a4 primaryColor:(int)a5 secondaryColor:(int)a6 appearance:(id)a7;
+ (id)chevronImage;
+ (id)uiImageWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2;

- (id)initWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2 weight:(long long)a3;
- (id)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (id)initWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2;
- (int)defaultCornerRoundingStyle;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithSymbolName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)drawsOnBackground;
- (unsigned long long)hash;
- (double)aspectRatio;
- (id)initWithSFImage:(id)a0;

@end
