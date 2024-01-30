@interface FCTagIDFeature : FCPersonalizationFeature

- (id)init;
- (id)initWithTagID:(id)a0;
- (id)initWithPersonalizationIdentifier:(id)a0;
- (BOOL)shouldBeBoosted;
- (double)featureWeightWithConfigurableValues:(id)a0 publisherID:(id)a1;

@end
