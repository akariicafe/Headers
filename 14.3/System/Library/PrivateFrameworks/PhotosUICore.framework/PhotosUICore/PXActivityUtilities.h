@interface PXActivityUtilities : NSObject

+ (id)sharedWorkQueue;
+ (void)requestMeContactWithCompletion:(id /* block */)a0;
+ (void)requestContactMatchingEmail:(id)a0 orPhone:(id)a1 withFirstName:(id)a2 lastName:(id)a3 keysToFetch:(id)a4 withCompletion:(id /* block */)a5;
+ (void)requestImageForContact:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
+ (void)_requestMonogramForFirstName:(id)a0 lastName:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;
+ (id)_initialsFromFirstName:(id)a0 lastName:(id)a1;
+ (id)textForDate:(id)a0;
+ (void)requestPersonImageWithTargetSize:(struct CGSize { double x0; double x1; })a0 matchingEmail:(id)a1 orPhone:(id)a2 withFirstName:(id)a3 lastName:(id)a4 prefersPhotosImage:(BOOL)a5 withCompletion:(id /* block */)a6;
+ (void)requestImageFromPeopleAlbumForPerson:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;

@end
