@class NSString;

@interface NFLHeadlineImageOnSideAccessibilityCollectionViewLayoutAttributes : NFLHeadlineCollectionViewLayoutAttributes {
    NSString *_titleFontName;
    double _titleFontSize;
    double _titleLineHeight;
}

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } titleNextToImageRange;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } titleNextToImageFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } titleBellowImageFrame;

- (void)setExcerptLineHeight:(double)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setExcerptFontSize:(double)a0;
- (void)setExcerptFontName:(id)a0;
- (double)excerptLineHeight;
- (id)protobufRepresentationnormalizedWithFeedGutter:(double)a0;
- (id)excerptFontName;
- (double)excerptFontSize;
- (void)populateWithProtobuf:(id)a0 normalizedWithFeedGutter:(double)a1;
- (BOOL)isEqual:(id)a0;

@end
