@class UIFont, UIColor, GEOGuideLocation, UIImage, NSAttributedString;

@interface MKPlaceCompactCollectionViewModel : NSObject

@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *subTitleFont;
@property (nonatomic) BOOL useBorderHighlight;
@property (nonatomic) struct CGSize { double width; double height; } photoSize;
@property (nonatomic) long long context;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSAttributedString *title;
@property (retain, nonatomic) NSAttributedString *subTitle;
@property (readonly, nonatomic) BOOL isWorldwide;
@property (readonly, nonatomic) GEOGuideLocation *guideLocation;

- (id)initWithGuideLocation:(id)a0 titleFont:(id)a1 subTitleFont:(id)a2 context:(long long)a3 useBorderHighlight:(BOOL)a4;
- (id)description;
- (void)compactCollectionImageForSize:(struct CGSize { double x0; double x1; })a0 onCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
