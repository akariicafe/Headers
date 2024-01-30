@interface CPSPointOfInterestClusterView : MKMarkerAnnotationView

- (void)_configure;
- (void)prepareForDisplay;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setAnnotation:(id)a0;
- (void)prepareForReuse;
- (void)update;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;

@end
