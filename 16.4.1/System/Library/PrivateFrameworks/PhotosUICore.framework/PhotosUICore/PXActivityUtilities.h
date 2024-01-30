@interface PXActivityUtilities : NSObject

+ (id)sharedWorkQueue;
+ (void)requestMeContactWithCompletion:(id /* block */)a0;
+ (id)_initialsFromGivenName:(id)a0 familyName:(id)a1;
+ (void)_requestContactMatchingEmail:(id)a0 orPhone:(id)a1 withFirstName:(id)a2 lastName:(id)a3 keysToFetch:(id)a4 withCompletion:(id /* block */)a5;
+ (void)_requestImageForContact:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 isRTL:(BOOL)a3 completion:(id /* block */)a4;
+ (void)_requestPlaceholderMonogramWithTargetSize:(struct CGSize { double x0; double x1; })a0 displayScale:(double)a1 completion:(id /* block */)a2;
+ (void)requestImageForContact:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 isRTL:(BOOL)a3 completion:(id /* block */)a4;
+ (void)requestImageFromPeopleAlbumForPerson:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 highQualityFormat:(BOOL)a3 completion:(id /* block */)a4;
+ (void)requestMeContactForKeys:(id)a0 completionHandler:(id /* block */)a1;
+ (void)requestMonogramForEmailAddress:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 isRTL:(BOOL)a3 completion:(id /* block */)a4;
+ (void)requestMonogramForGivenName:(id)a0 familyName:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 displayScale:(double)a3 isRTL:(BOOL)a4 completion:(id /* block */)a5;
+ (void)requestPersonImageWithTargetSize:(struct CGSize { double x0; double x1; })a0 displayScale:(double)a1 isRTL:(BOOL)a2 matchingEmail:(id)a3 orPhone:(id)a4 withFirstName:(id)a5 lastName:(id)a6 prefersPhotosImage:(BOOL)a7 withCompletion:(id /* block */)a8;
+ (id)textForDate:(id)a0;

@end
