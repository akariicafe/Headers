@interface PersonalizationPortraitInternals.BackgroundTextConsumer : PersonalizationPortraitInternals.Consumer <HVNewsConsumer, HVNotesConsumer, HVSafariConsumer, HVThirdPartyAppConsumer, HVMailConsumer>

- (id)deleteDataDerivedFromContentMatchingRequest:(id)a0;
- (id)consumerName;
- (id)consumeThirdPartyAppContentWithContext:(id)a0;
- (id)consumeMailContentWithContext:(id)a0;
- (id)consumeNotesContentWithContext:(id)a0;
- (id)consumeNewsArticleViewsWithContext:(id)a0;
- (id)consumeSafariContentWithContext:(id)a0;
- (void).cxx_destruct;

@end
