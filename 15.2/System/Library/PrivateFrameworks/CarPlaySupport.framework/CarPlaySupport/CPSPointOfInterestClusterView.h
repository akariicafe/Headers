@interface CPSPointOfInterestClusterView : MKMarkerAnnotationView

- (void)prepareForDisplay;
- (void)setAnnotation:(id)a0;
- (void)_configure;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (void)update;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;

@end
