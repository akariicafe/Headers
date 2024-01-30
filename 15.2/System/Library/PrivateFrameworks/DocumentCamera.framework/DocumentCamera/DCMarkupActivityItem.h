@class ICDocCamDocumentInfo, ICDocCamImageCache;

@interface DCMarkupActivityItem : NSObject

@property (retain, nonatomic) ICDocCamDocumentInfo *documentInfo;
@property (retain, nonatomic) ICDocCamImageCache *imageCache;

- (void).cxx_destruct;
- (id)initWithDocumentInfo:(id)a0 imageCache:(id)a1;

@end
