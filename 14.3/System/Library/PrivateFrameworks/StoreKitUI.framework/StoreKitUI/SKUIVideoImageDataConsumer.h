@class UIColor, SKUIColorScheme;

@interface SKUIVideoImageDataConsumer : SKUIImageDataConsumer

@property (nonatomic) unsigned long long allowedOrientations;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (nonatomic) struct CGSize { double width; double height; } landscapeSize;
@property (nonatomic) struct CGSize { double width; double height; } portraitSize;

- (void).cxx_destruct;
- (id)imageForColor:(id)a0 orientation:(unsigned long long)a1;
- (id)imageForImage:(id)a0;

@end
