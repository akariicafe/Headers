@class UIWebClip;

@interface SearchUIWebClipIconImage : SearchUIAppIconImage

@property (retain, nonatomic) UIWebClip *webClip;

+ (id)convertImage:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1 withShape:(unsigned long long)a2 scale:(double)a3;

- (id)uniqueIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithWebClip:(id)a0 variant:(unsigned long long)a1;
- (id)generateImageWithFormat:(int)a0 scale:(double)a1;

@end
