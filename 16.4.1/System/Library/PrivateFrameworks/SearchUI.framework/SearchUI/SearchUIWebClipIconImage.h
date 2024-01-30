@class UIWebClip;

@interface SearchUIWebClipIconImage : SearchUIAppIconImage

@property (retain, nonatomic) UIWebClip *webClip;

+ (id)convertImage:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1 withShape:(unsigned long long)a2 scale:(double)a3;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)generateImageWithFormat:(int)a0 scale:(double)a1;
- (id)initWithWebClip:(id)a0 variant:(unsigned long long)a1;

@end
