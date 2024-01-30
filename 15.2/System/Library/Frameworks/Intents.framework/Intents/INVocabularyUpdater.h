@interface INVocabularyUpdater : _INVocabularyConnection

+ (id)_sharedAppInstance;
+ (void)clearAllCustomVocabulary;

- (void)setCustomPhotoAlbumNames:(id)a0;
- (void)setValidatedVocabulary:(id)a0 forIntentSlot:(id)a1 validationCompletion:(id /* block */)a2;

@end
