@interface SearchUISymbolImage : SearchUIImage

+ (id)chevronImage;
+ (id)systemImageName:(id)a0 withConfiguration:(id)a1;

- (id)initWithSymbolName:(id)a0 textStyle:(id)a1;
- (id)initWithSymbolName:(id)a0 scale:(long long)a1;
- (unsigned long long)hash;
- (id)initWithSymbolName:(id)a0 font:(id)a1;
- (id)initWithSymbolName:(id)a0 pointSize:(double)a1;
- (BOOL)isEqual:(id)a0;
- (int)defaultCornerRoundingStyle;
- (id)initWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2;
- (id)initWithSymbolName:(id)a0 textStyle:(id)a1 scale:(long long)a2 font:(id)a3;
- (id)initWithSymbolName:(id)a0;
- (id)initWithSymbolName:(id)a0 textStyle:(id)a1 scale:(long long)a2;

@end
