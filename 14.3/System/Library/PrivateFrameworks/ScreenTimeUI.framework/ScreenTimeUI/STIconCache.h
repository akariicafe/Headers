@class CNMonogrammer, UIImage, NSURLSession, NSObject, NSMutableSet, NSPersonNameComponentsFormatter, NSCache;
@protocol OS_dispatch_queue;

@interface STIconCache : NSObject {
    NSCache *_iconByKeyCache;
}

@property (class, readonly, nonatomic) STIconCache *sharedCache;

@property (retain, nonatomic) CNMonogrammer *monogrammer;
@property (retain, nonatomic) NSPersonNameComponentsFormatter *personNameComponentsFormatter;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *lookupQueue;
@property (readonly, nonatomic) NSURLSession *urlSession;
@property (readonly, nonatomic) NSMutableSet *bundleIdentifiersWithPendingRequests;
@property (readonly) UIImage *imageForBlankApplicationIcon;

- (void)removeObserver:(id)a0 bundleIdentifier:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addObserver:(id)a0 selector:(SEL)a1 bundleIdentifier:(id)a2;
- (void)_fetchImageForAppInfoIfNeeded:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleiTunesResponseForAppInfo:(id)a0 response:(id)a1 data:(id)a2 error:(id)a3 completionHandler:(id /* block */)a4;
- (void)_updateCacheWithImage:(id)a0 bundleIdentifier:(id)a1;
- (void)_fetchImageForAppInfoIfNeeded:(id)a0;
- (void)_handleiTunesResponseForAppInfo:(id)a0 response:(id)a1 data:(id)a2 error:(id)a3;
- (id)blankSpaceImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)_newCircleImageWithFillColor:(id)a0 fillDiameter:(double)a1 outlineColor:(id)a2 outlineWidth:(double)a3;
- (id)_personImageWithDSID:(id)a0 fullName:(id)a1 appleID:(id)a2 forceFetch:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)monogramImageForNameComponents:(id)a0;
- (void)_fetchFamilyPhotoWithDSID:(id)a0 fullName:(id)a1 appleID:(id)a2 completionHandler:(id /* block */)a3;
- (void)_updateCacheWithImage:(id)a0 dsid:(id)a1;
- (void)imageForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)imageForBundleIdentifier:(id)a0;
- (id)imageForCategoryIdentifier:(id)a0;
- (id)circleImageWithFillColor:(id)a0 fillDiameter:(double)a1 outlineColor:(id)a2 outlineWidth:(double)a3;
- (id)roundedImageForImageWithName:(id)a0;
- (id)personImageWithDSID:(id)a0 fullName:(id)a1;
- (void)fetchPersonImageWithDSID:(id)a0 fullName:(id)a1 appleID:(id)a2 forceFetch:(BOOL)a3 completionHandler:(id /* block */)a4;

@end
