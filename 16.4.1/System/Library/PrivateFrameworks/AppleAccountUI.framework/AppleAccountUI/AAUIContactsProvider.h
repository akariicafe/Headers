@class AAContactsManager;

@interface AAUIContactsProvider : AAContactsProvider {
    AAContactsManager *_contactsManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)_fetchImageDataForLocalContact:(id)a0 ofSize:(double)a1 withCompletion:(id /* block */)a2;
- (void)_fetchImagesForContacts:(id)a0 ofSize:(double)a1 completion:(id /* block */)a2;
- (void)_fetchServerImageDataFor:(id)a0 WithCompletion:(id /* block */)a1;
- (void)fetchSuggestedBeneficiariesWithImagesOfSize:(double)a0 andCompletion:(id /* block */)a1;
- (void)fetchSuggestedCustodiansWithImagesOfSize:(double)a0 andCompletion:(id /* block */)a1;

@end
