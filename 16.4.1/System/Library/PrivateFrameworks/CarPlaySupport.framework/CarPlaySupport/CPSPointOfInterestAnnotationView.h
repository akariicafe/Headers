@class CPImageSet;

@interface CPSPointOfInterestAnnotationView : MKAnnotationView

@property (retain, nonatomic) CPImageSet *imageSet;
@property (retain, nonatomic) CPImageSet *selectedImageSet;

+ (struct CGPath { } *)_createPathForBalloonRadius:(double)a0 tailLength:(double)a1;
+ (id)balloonWithText:(id)a0 traitCollection:(id)a1;

- (void)prepareForDisplay;
- (void)_configure;
- (void)setSelected:(BOOL)a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void)_updateImage;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (id)_defaultPOI;

@end
