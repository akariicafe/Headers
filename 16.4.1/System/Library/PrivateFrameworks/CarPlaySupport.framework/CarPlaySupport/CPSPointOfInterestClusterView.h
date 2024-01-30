@interface CPSPointOfInterestClusterView : MKMarkerAnnotationView

- (void)prepareForDisplay;
- (void)_configure;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void)update;
- (void)setAnnotation:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;

@end
