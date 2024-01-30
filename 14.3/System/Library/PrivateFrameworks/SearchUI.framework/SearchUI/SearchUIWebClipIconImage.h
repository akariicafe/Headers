@class UIWebClip;

@interface SearchUIWebClipIconImage : SearchUIAppIconImage

@property (retain, nonatomic) UIWebClip *webClip;

+ (id)convertImage:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1 withShape:(unsigned long long)a2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)uniqueIdentifier;
- (id)generateImageWithFormat:(int)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithWebClip:(id)a0 variant:(unsigned long long)a1;

@end
