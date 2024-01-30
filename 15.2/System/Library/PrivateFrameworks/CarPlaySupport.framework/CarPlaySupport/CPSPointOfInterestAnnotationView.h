@class CPImageSet;

@interface CPSPointOfInterestAnnotationView : MKAnnotationView

@property (retain, nonatomic) CPImageSet *imageSet;

+ (struct CGPath { } *)_createPathForBalloonRadius:(double)a0 tailLength:(double)a1;
+ (id)balloonWithText:(id)a0 traitCollection:(id)a1;

- (void)prepareForDisplay;
- (void)_configure;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (void)update;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (id)_defaultPOI;

@end
